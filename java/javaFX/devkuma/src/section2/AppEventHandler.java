package section2;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class AppEventHandler extends Application {
    Label label;
    TextField field;
    Button button;

    @Override
    public void start(Stage stage) throws Exception {
        label = new Label("This is JavaFX!");
        field = new TextField();
        button = new Button("Click");
        // 액션 이벤트 처리
        button.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                String msg = "you typed: " + field.getText();
                label.setText(msg);
            }
        });
        BorderPane pane = new BorderPane();
        pane.setTop(label);
        pane.setCenter(field);
        pane.setBottom(button);
        Scene scene = new Scene(pane, 320, 120);
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
