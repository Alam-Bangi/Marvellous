package PPA.gui;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI6 {
    public static void main(String[] args) {
        JFrame fobj = new JFrame("Marvellous Infosystems");
        JButton bobj = new JButton("Submit");

        bobj.setBounds(100,100, 150,  50);

        bobj.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(fobj, "Button clicked !!!");
            }
        });
        fobj.add(bobj);

        fobj.setSize(400, 300);

        fobj.setLayout(null);

        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
