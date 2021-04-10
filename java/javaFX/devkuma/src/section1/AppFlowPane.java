package section1;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.FlowPane;
import javafx.stage.Stage;

public class AppFlowPane extends Application {
    @Override
    public void start(Stage stage) throws Exception {
        Label label = new Label("This is javaFX!");
        FlowPane pane = new FlowPane();
        pane.getChildren().add(label);
        Scene scene = new Scene(pane, 320, 240);
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
