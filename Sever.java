package pakage1;
import java.io.IOException;
import java.net.*;
public class Sever 
{
   public static void main(String[] args) 
    {
        //1�����͵���Ϣ
        String info = "������������";
        //2����ϢתΪ�ֽ�����
        byte[] bytes = info.getBytes();
        try {
            //3����װһ�����ݱ���
            DatagramPacket dp = new DatagramPacket(bytes,0,bytes.length,InetAddress.getByName("127.0.0.1"),8000);
             //4��������Ķ˿�
            DatagramSocket socket = new DatagramSocket(9000);
            //5����������
            socket.send(dp);
            //6���ر�
            socket.close();
        } catch (UnknownHostException | SocketException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
