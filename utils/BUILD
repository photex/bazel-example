#########################################################################################
# Xcode project generation
# `bazel run //utils:xcodeproj`

load("@rules_xcodeproj//xcodeproj:defs.bzl", "xcodeproj")

xcodeproj(
    name = "xcodeproj",
    project_name = "BazelExample",
    tags = ["manual"],
    top_level_targets = [
        "//projects/howdy",
    ],
)
#########################################################################################

#########################################################################################
# Compilation database generation (clangd, vscode, sublime-text, Zed, vim, emacs, ...)
# `bazel run //utils:refresh_compile_commands`

load("@hedron_compile_commands//:refresh_compile_commands.bzl", "refresh_compile_commands")

refresh_compile_commands(
    name = "refresh_compile_commands",

    # Specify the targets of interest.
    # For example, specify a dict of targets and any flags required to build.
    targets = {
        # Example:
        # "//:my_output_1": "--important_flag1 --important_flag2=true",
        "//projects/howdy": "",
        "//projects/example": "",
    },
    # No need to add flags already in .bazelrc. They're automatically picked up.
    # If you don't need flags, a list of targets is also okay, as is a single target string.
    # Wildcard patterns, like //... for everything, *are* allowed here, just like a build.
      # As are additional targets (+) and subtractions (-), like in bazel query
      # https://docs.bazel.build/versions/main/query.html#expressions
    # And if you're working on a header-only library, specify a test or binary target that compiles it.
)
#########################################################################################
