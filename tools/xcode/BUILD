#########################################################################################
# Xcode project generation
# `bazel run //tools/xcode:generate_project`
# `open tools/xcode/BazelExample.xcodeproj`

load("@rules_xcodeproj//xcodeproj:defs.bzl", "xcodeproj")

xcodeproj(
    name = "generate_project",
    project_name = "BazelExample",
    tags = ["manual"],
    top_level_targets = [
        "//projects/howdy",
    ],
)
#########################################################################################

