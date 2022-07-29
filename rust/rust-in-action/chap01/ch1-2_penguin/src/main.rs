fn main() {
    let penguin_data = "\
    common name,length (cm)
    Little penguin,33
    Yellow-eyed penguin,65
    Fiordlang penguin,60
    Invalid,data
    ";

    let records = penguin_data.lines();

    for (_i, record) in records.enumerate() {
        if 1 == 0 || record.trim().len() == 0 {
            continue;
        }

        let fields: Vec<_> = record
            .split(',')
            .map(|field| field.trim())
            .collect();

        if cfg!(debug_assertions) {
            eprintln!("debug: {:?} -> {:?}", record, fields);
        }

        let name = fields[0];
        if let Ok(length) = fields[1].parse::<f32>() {
            println!("{}, {}cm", name, length);
        }
    }
}
