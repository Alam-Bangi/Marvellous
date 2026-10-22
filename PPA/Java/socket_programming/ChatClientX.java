package PPA.Java.socket_programming;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;

public class ChatClientX {
    public static void main(String[] args) {
        try {
            Socket sobj = new Socket("localhost", 5100);
            System.out.println("Client gets connected with server successfully");

            PrintStream pobj = new PrintStream(sobj.getOutputStream());
            BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Marvellous server is running");
            String str1 = null, str2 = null;
            System.out.println("Enter message for server : ");
            while (!(str1 = bobj2.readLine()).equals("end")) {
//            while (true) {
//                str1 = bobj2.readLine();
//                if(str1.equals("end")) {
//                    System.out.println("Client disconnected");
//                    continue;
//                }
                pobj.println(str1);
                str2 = bobj1.readLine();
                System.out.println("Server says : " + str2);
                System.out.println("Enter message for server : ");
            }
            pobj.close();
            bobj1.close();
            bobj2.close();
            sobj.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    } // End of main
} // End of class