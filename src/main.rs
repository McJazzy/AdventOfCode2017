extern crate getopts;
use getopts::Options;
use std::env;

struct OptionT {
    part1: bool,
    part2: bool,
    day : String,
}

fn print_usage(program: &str, opts: Options) {
    let brief = format!("Usage: {} FILE [options]", program);
    print!("{}", opts.usage(&brief));
}

fn parse_args(args : Vec<String>) -> OptionT {
    let mut opts = OptionT { part1: true, part2: true, day: "".to_string()};

    let program = args[0].clone();
    let mut cmd_opts = Options::new();
    cmd_opts.optopt("d", "day", "day to execute, defaults to all", "1");
    cmd_opts.optopt("p", "part", "part to execute, defaults to both", "1");
    cmd_opts.optflag("h", "help", "print this help menu");

    let matches = match cmd_opts.parse(&args[1..]) {
        Ok(m) =>  {m }
        Err(f) => { panic!(f.to_string())}
    };

    if matches.opt_present("h") {
        print_usage(&program, cmd_opts);
        return opts;
    }
    let day = matches.opt_str("d");
    match day {
        Some(day) => opts.day = day,
        None => opts.day = "*".to_string()
    }

    let part = matches.opt_str("p");
    match part {
        Some(part) =>  match part.as_str() {
            "1" => opts.part2 = false,
            "2" => opts.part1 = false,
            _ => ()
        },
        None => ()
    }

    println!("day {} part1 {} part2 {}", opts.day, opts.part1, opts.part2);
    return opts;
}


fn main() {
    let args: Vec<String> = env::args().collect();
    parse_args(args);
}





