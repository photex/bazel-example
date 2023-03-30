
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

#######################################################################################################################
http_archive(
    name = "bazel_skylib",
    sha256 = "b8a1527901774180afc798aeb28c4634bdccf19c4d98e7bdd1ce79d1fe9aaad7",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.4.1/bazel-skylib-1.4.1.tar.gz",
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.4.1/bazel-skylib-1.4.1.tar.gz",
    ],
)

load("@bazel_skylib//:workspace.bzl", "bazel_skylib_workspace")

bazel_skylib_workspace()
#######################################################################################################################

#######################################################################################################################
http_archive(
    name = "rules_xcodeproj",
    sha256 = "7967b372bd1777214ce65c87a82ac0630150b7504b443de0315ea52e45758e0c",
    url = "https://github.com/MobileNativeFoundation/rules_xcodeproj/releases/download/1.3.3/release.tar.gz",
)

load(
    "@rules_xcodeproj//xcodeproj:repositories.bzl",
    "xcodeproj_rules_dependencies",
)

xcodeproj_rules_dependencies()
#######################################################################################################################

#######################################################################################################################
http_archive(
    name = "build_bazel_rules_apple",
    sha256 = "9e26307516c4d5f2ad4aee90ac01eb8cd31f9b8d6ea93619fc64b3cbc81b0944",
    url = "https://github.com/bazelbuild/rules_apple/releases/download/2.2.0/rules_apple.2.2.0.tar.gz",
)

load(
    "@build_bazel_rules_apple//apple:repositories.bzl",
    "apple_rules_dependencies",
)

apple_rules_dependencies()
#######################################################################################################################

#######################################################################################################################
http_archive(
    name = "build_bazel_rules_swift",
    sha256 = "bf2861de6bf75115288468f340b0c4609cc99cc1ccc7668f0f71adfd853eedb3",
    url = "https://github.com/bazelbuild/rules_swift/releases/download/1.7.1/rules_swift.1.7.1.tar.gz",
)

load(
    "@build_bazel_rules_swift//swift:repositories.bzl",
    "swift_rules_dependencies",
)

swift_rules_dependencies()

load(
    "@build_bazel_rules_swift//swift:extras.bzl",
    "swift_rules_extra_dependencies",
)

swift_rules_extra_dependencies()
#######################################################################################################################

#######################################################################################################################
http_archive(
    name = "build_bazel_apple_support",
    sha256 = "9a2338d6f8dad3244f823f2dc6084a03e4d0fbb27ca892dc970e6890d5b48184",
    url = "https://github.com/bazelbuild/apple_support/releases/download/1.5.0/apple_support.1.5.0.tar.gz",
)

load(
    "@build_bazel_apple_support//lib:repositories.bzl",
    "apple_support_dependencies",
)

apple_support_dependencies()
#######################################################################################################################

#######################################################################################################################
http_archive(
    name = "rules_proto",
    sha256 = "dc3fb206a2cb3441b485eb1e423165b231235a1ea9b031b4433cf7bc1fa460dd",
    strip_prefix = "rules_proto-5.3.0-21.7",
    urls = [
        "https://github.com/bazelbuild/rules_proto/archive/refs/tags/5.3.0-21.7.tar.gz",
    ],
)
load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")
rules_proto_dependencies()
rules_proto_toolchains()
#######################################################################################################################

#######################################################################################################################
http_archive(
  	name = "googletest",
  	urls = ["https://github.com/google/googletest/archive/5ab508a01f9eb089207ee87fd547d290da39d015.zip"],
  	strip_prefix = "googletest-5ab508a01f9eb089207ee87fd547d290da39d015",
	sha256 = "755f9a39bc7205f5a0c428e920ddad092c33c8a1b46997def3f1d4a82aded6e1"
)
#######################################################################################################################

#######################################################################################################################
http_archive(
  	name = "fmt",
  	urls = ["https://github.com/fmtlib/fmt/archive/refs/tags/9.1.0.tar.gz"],
  	strip_prefix = "fmt-9.1.0",
  	build_file = "@//:third_party/BUILD.fmt",
  	sha256 = "5dea48d1fcddc3ec571ce2058e13910a0d4a6bab4cc09a809d8b1dd1c88ae6f2"
)
#######################################################################################################################

#######################################################################################################################
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
