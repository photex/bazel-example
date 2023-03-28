
cc_binary(
    name = "howdy",
    srcs = ["main.cpp"],
    deps = ["//projects/example:example", "@fmt//:fmt"],
    visibility=["//visibility:public"],
)

cc_test(
    name = "tests",
    srcs = glob(["tests/*"]),
    deps = ["@googletest//:gtest"],
)
