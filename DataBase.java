package com.dao;

import java.sql.Connection;
import java.sql.DriverManager;

public class DataBase {
	
	private  String url = "jdbc:sqlserver://localhost:1433;databaseName=library";
	private  String driver = "com.microsoft.sqlserver.jdbc.SQLServerDriver";
	private  String user = "sa";
	private  String password = "rui19980916";
	
	public java.sql.Connection getConnection(){// ��ȡ����
		Connection cnn=null;
		try {
			
			Class.forName(driver);// ������������
			cnn= DriverManager.getConnection(url, user, password);
						
		} catch (java.sql.SQLException | ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		    return cnn;
	}

}
