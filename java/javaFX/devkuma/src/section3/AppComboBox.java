package section3;

import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.scene.Scene;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class AppComboBox extends Application {
    Label label;
    ComboBox<String> combo;

    @Override
    public void start(Stage stage) throws Exception {
        label = new Label("This is JavaFX!");
        ObservableList<String> data = FXCollections.observableArrayList("One", "Two", "Three");
        combo = new ComboBox<String>(data);
        combo.setOnAction((ActionEvent) -> {
            label.setText(combo.getValue());
        });
        BorderPane pane = new BorderPane();
        pane.setTop(label);
        pane.setCenter(combo);
        Scene scene = new Scene(pane, 320, 120);
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}

