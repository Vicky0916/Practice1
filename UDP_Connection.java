package pakage1;
import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.SocketException;
public class UDP_Connection {
    public static void main(String[] args) {
        //ֻ����1024�ֽ�
        byte[] bytes = new byte[1024];
        DatagramPacket dp = new DatagramPacket(bytes,bytes.length);
        try {
            //������Ķ˿ں�
            DatagramSocket socket = new DatagramSocket(8000);
            System.out.println("�ͻ����ڷ����վ�");
            //һ��ʼ�ǿհ���û�����ݹ��� �������� �ȴ�
            socket.receive(dp); //��������
            String info = new String(dp.getData(),0,dp.getLength());
            System.out.println(info);
            socket.close();   
        } catch (SocketException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
