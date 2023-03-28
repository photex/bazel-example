
#
# Not everything in the Bazel universe has transitioned to modules yet. For these
# external projects or tools you can use the WORKSPACE to make them available.
# Everybody has a sort of artisinal method of creating their targets but forking
# and pinning to a commit and sha256 hash can keep things stable for you though.
#

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

########################################################################################################################
# Hedron's Compile Commands Extractor for Bazel
# https://github.com/hedronvision/bazel-compile-commands-extractor
http_archive(
    name = "hedron_compile_commands",

    # Replace the commit hash in both places (below) with the latest, rather than using the stale one here.
    # Even better, set up Renovate and let it do the work for you (see "Suggestion: Updates" in the README).
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/ed994039a951b736091776d677f324b3903ef939.tar.gz",
    strip_prefix = "bazel-compile-commands-extractor-ed994039a951b736091776d677f324b3903ef939",
    # When you first run this tool, it'll recommend a sha256 hash to put here with a message like:
    # "DEBUG: Rule 'hedron_compile_commands' indicated that a canonical reproducible form can be obtained by
    # modifying arguments sha256 = ..."
)
load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")
hedron_compile_commands_setup()
########################################################################################################################


########################################################################################################################
# LLVM itself (and all compilers and tools) can be built from source and used as a toolchain in a Bazel build.
# It's the ultimate weapon. It's critical that you make use of disk-caching or remote caching in these cases though.

# Replace with the LLVM commit you want to use.
LLVM_COMMIT = "81d5412439efd0860c0a8dd51b831204f118d485"

# The easiest way to calculate this for a new commit is to set it to empty and
# then run a bazel build and it will report the digest necessary to cache the
# archive and make the build reproducible.
LLVM_SHA256 = "50b3ef31b228ea0c96ae074005bfac087c56e6a4b1c147592dd33f41cad0706b"

http_archive(
    name = "llvm-raw",
    build_file_content = "# empty",
    sha256 = LLVM_SHA256,
    strip_prefix = "llvm-project-" + LLVM_COMMIT,
    urls = ["https://github.com/llvm/llvm-project/archive/{commit}.tar.gz".format(commit = LLVM_COMMIT)],
)

load("@llvm-raw//utils/bazel:configure.bzl", "llvm_configure", "llvm_disable_optional_support_deps")

llvm_configure(name = "llvm-project")
########################################################################################################################
