
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
    sha256 = "085bde6c5212c8c1603595341ffe7133108034808d8c819f8978b2b303afc9e7"
)
load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")
hedron_compile_commands_setup()
########################################################################################################################
