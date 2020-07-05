extern crate selenium_rs;
use selenium_rs::webdriver::{Browser, WebDriver, Selector};

fn main() {
    let mut driver= WebDriver::new(Browser::Chrome);
    driver.start_session();

    driver.navigate("https://www.google.com");

    let search_bar = driver.find_element(Selector::CSS, "input[maxlength=\"2048\"]").unwrap();
    search_bar.type_text("selenium-rs github");

    let search_button = driver.find_element(Selector::CSS, "input[name=\"btnK\"]").unwrap();
    search_button.click();
}
