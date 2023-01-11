use std::io::Read;
use select::document::Document;
use select::predicate::Name;

fn main() {
    let client = reqwest::blocking::Client::new();
    let origin_url = "https://rolisz.ro/";
    let mut res = client.get(origin_url).send().unwrap();
    println!("Status for {}: {}", origin_url, res.status());

    let mut body = String::new();
    res.read_to_string(&mut body).unwrap();
    //println!("HTML: {}", &body);

    Document::from(body.as_str())
        .find(Name("a"))
        .filter_map(|n| n.attr("href"))
        .for_each(|x| println!("{}", x));
}
