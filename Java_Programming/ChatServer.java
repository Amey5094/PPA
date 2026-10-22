
// import java.io.*;
// import java.net.*;

// class ChatServer {

//     public static void main(String A[]) {
//         // 1. Declare network variables outside try block so they can be closed in "finally"
//         ServerSocket ssobj = null;
//         Socket sobj = null;
//         BufferedReader bobj1 = null; // Client reader
//         BufferedReader bobj2 = null; // Keyboard reader
//         PrintStream pobj = null;

//         try {
//             // 2. Setup the server and wait for connection
//             ssobj = new ServerSocket(5100);
//             System.out.println("Server is running at port 5100");

//             sobj = ssobj.accept();
//             System.out.println("Client Request get accepted successfully");

//             // 3. Initialize communication streams
//             pobj = new PrintStream(sobj.getOutputStream());
//             bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
//             bobj2 = new BufferedReader(new InputStreamReader(System.in));

//             System.out.println("Marvellous Server is ready for chat");
//             String str1 = null, str2 = null;

//             // 4. Main communication loop wrapped safely inside the try block
//             while ((str1 = bobj1.readLine()) != null) {
//                 System.out.println("Client Says: " + str1);
//                 System.out.print("Enter Message for client: ");
//                 str2 = bobj2.readLine();
//                 pobj.println(str2);
//             }

//         } catch (java.net.SocketException e) {
//             // This catches the exact "Connection reset" error when a client crashes or force-closes
//             System.out.println("\n[Info] A client forcefully disconnected or closed their app.");
//         } catch (java.io.IOException e) {
//             System.out.println("Communication error: " + e.getMessage());
//         } finally {
//             // 5. Crucial: Safely close resources to free up port 5100
//             try {
//                 if (bobj1 != null) {
//                     bobj1.close();
//                 }
//                 if (bobj2 != null) {
//                     bobj2.close();
//                 }
//                 if (pobj != null) {
//                     pobj.close();
//                 }
//                 if (sobj != null) {
//                     sobj.close();
//                 }
//                 if (ssobj != null) {
//                     ssobj.close();
//                 }
//             } catch (java.io.IOException ex) {
//                 ex.printStackTrace();
//             }
//             System.out.println("Server shut down cleanly.");
//         }
//     }
// }



import java.io.*;
import java.net.*;

class ChatServer 
{
    public static void main(String A[]) throws Exception 
    {
        
        ServerSocket ssobj = new ServerSocket(5100);
        System.out.println("Server is running at port 5100");
        Socket sobj = ssobj.accept();
        System.out.println("Client Request get accepted succesfully");

        PrintStream pobj = new PrintStream(sobj.getOutputStream());
        BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Marvellous Server is running");
        String str1=null, str2=null;

        while((str1=bobj1.readLine())!=null)
        {
            System.out.println("Client Says: "  +str1);
            System.out.println("Enter Message for client:");
            str2=bobj2.readLine();
            pobj.println(str2);
        }
    }
}