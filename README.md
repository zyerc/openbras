# ƽ̨������

һ��Ŀ¼�ṹ
+ACE 				����Ӧ����ͨ�ſ��IPC��
+ACEWrapper 		ACE��װ��
+AuthMgr			��֤����
+Base				������
+Build				���������ͱ���ϵͳ
+Configuration		����
+Contrib			��������
+Doc				�ĵ�
+include			�ӿ�ͷ�ļ��ͺ궨��
+IPC				���̼�ͨ�ſ�
+IPOE				IPOE���̣�����IPOE����ҵ��
+IPPoolManager		��ַ�ع���
+OAM				��������
+Portal				Webǿ��ҵ����
+PPP				PPPЭ��⣬��PPPOE����ʹ��
+PPPOE				PPPOE���̣�����PPPOEҵ�����
+UserMgr			�û��������̣�����PPPOE��IPOE�û�����
+radiusserver		������radius�������������á�
+Platform			WFNOS ƽ̨��

������α���
����BuildĿ¼�¡�source env.sh���û�������
1)�������
	make debug=1����debug�汾
	make debug=0����release�汾

2)�������̱���
	make pppoe����pppoe����
	make ipoe����ipoe����
	
3)���п�������ɶ�̬���ӿ⡣

�������
�޹��汾��version.h��
#define MAJOR_VERSION 1
#define MINOR_VERSION 0
#define BETA_VERSION 1

Ȼ��ִ�б��롣����tar����
Ŀ¼�ṹ���£�
+bin
	-PPPOE
	-IPOE
	-UserMgr
	-AuthMgr
+libs
	-libACE.so
	-libACEWrapper.so
+logs
	-pppoe.log
	-ipoe.log
	-usermgr.log
	-authmgr.log
+conf
	-bngplatform.cfg

