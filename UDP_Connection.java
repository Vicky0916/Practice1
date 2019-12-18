package pakage1;
import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.SocketException;
public class UDP_Connection {
    public static void main(String[] args) {
        //只接收1024字节
        byte[] bytes = new byte[1024];
        DatagramPacket dp = new DatagramPacket(bytes,bytes.length);
        try {
            //本程序的端口号
            DatagramSocket socket = new DatagramSocket(8000);
            System.out.println("客户端在发送收据");
            //一开始是空包，没有数据过来 阻塞在这 等待
            socket.receive(dp); //接受数据
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
