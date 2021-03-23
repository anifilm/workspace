package client;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;

public class SimpleHttpClient {
    public static void main(String[] args) throws Exception {
        // 소켓 및 입출력 스트림 준비
        Socket socket = new Socket("www.etoland.co.kr", 80);
        BufferedReader in = new BufferedReader(
            new InputStreamReader(socket.getInputStream())
        );
        PrintStream out = new PrintStream(
            socket.getOutputStream()
        );
        out.println("GET / HTTP/1.1");

        // 헤더정보 출력
        out.println("Host: www.etoland.co.kr");
        out.println("User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_9_0)"
            + " AppleWebKit/537.36 (KHTML, like Gecko"
            + " Chrome/30.0.1599.101 Safari/537.36");

        // 공백라인 출력
        out.println();

        // 응답 내용 출력
        String line = null;
        while ((line = in.readLine()) != null) {
            System.out.println(line);
        }

        in.close();
        out.close();
        socket.close();
    }
}
