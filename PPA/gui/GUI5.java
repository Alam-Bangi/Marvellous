package PPA.gui;

import javax.swing.*;
import java.awt.event.*;

public class GUI5 {
    public static void main(String[] args) {
        JFrame fobj = new JFrame("Marvellous Infosystems");
        JButton bobj = new JButton("Submit");

        bobj.setBounds(100,100, 150,  50);

        bobj.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("Button clicked !!!");
            }
        });
        fobj.add(bobj);

        fobj.setSize(400, 300);

        fobj.setLayout(null);

        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
