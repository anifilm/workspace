package section3;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.Slider;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class AppSlider extends Application {
    Label label;
    Slider slider;
    Button button;

    @Override
    public void start(Stage stage) throws Exception {
        label = new Label("This is JavaFX!");
        slider = new Slider(0, 100, 50);
        slider.setShowTickMarks(true);
        slider.setShowTickLabels(true);
        slider.setSnapToTicks(true);
        button = new Button("CLICK");
        button.setOnAction((ActionEvent) -> {
            label.setText("VALUE: " + slider.getValue());
        });
        BorderPane pane = new BorderPane();
        pane.setTop(label);
        pane.setCenter(slider);
        pane.setBottom(button);
        Scene scene = new Scene(pane, 320, 120);
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}

