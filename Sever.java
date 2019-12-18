package pakage1;
import java.io.IOException;
import java.net.*;
public class Sever 
{
   public static void main(String[] args) 
    {
        //1、发送的消息
        String info = "服务器端运行";
        //2、消息转为字节数组
        byte[] bytes = info.getBytes();
        try {
            //3、封装一个数据报包
            DatagramPacket dp = new DatagramPacket(bytes,0,bytes.length,InetAddress.getByName("127.0.0.1"),8000);
             //4、本程序的端口
            DatagramSocket socket = new DatagramSocket(9000);
            //5、发送数据
            socket.send(dp);
            //6、关闭
            socket.close();
        } catch (UnknownHostException | SocketException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
