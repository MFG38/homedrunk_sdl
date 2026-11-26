add_rules("mode.debug", "mode.release")

add_requires("libsdl3", {
    configs = {
        shared = true
    }
})

target("homedrunk")
    set_kind("binary")
    set_languages("c89")

    add_files("src/*.c")
    add_includedirs("src")

    add_packages("libsdl3")
