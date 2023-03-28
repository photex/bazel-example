load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "example_proto",
    srcs = ["proto/Example.proto"],
    visibility = ["//visibility:public"],
)

cc_proto_library(
    name = "example_data",
    deps = [":example_proto"],
    visibility = ["//visibility:public"],
)

cc_library(
    name="example",
    srcs = [
        "public/example.h",
        "private/example.cpp",
    ],
    deps = [
        ":example_data"
    ],
    includes = ["public", "proto"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "tests",
    srcs = glob(["tests/*"]),
    deps = [":example", "@googletest//:gtest"],
)
