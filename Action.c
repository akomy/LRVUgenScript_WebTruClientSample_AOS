//   ************************************************************************
//   ****   ����: ����͎��ۂ̃X�N���v�g�̓ǂݎ���p�\���ł��B�ҏW����ꍇ�� "�X�N���v�g�̊J��" �{�^���������Ă��������B   ****
//   ************************************************************************

Action()
{
	lr_start_transaction("Top Screen");
	truclient_step("1", "'http://www.advantageonlineshopping.com' �� �ړ�", "snapshot=Action_1.inf");
	truclient_step("2", "LAPTOPS Shop Now �� �N���b�N", "snapshot=Action_2.inf");
	lr_end_transaction("Top Screen",0);
	truclient_step("3", "LAPTOPS �� 'Visible Text' �܂� LAPTOPS �� ����", "snapshot=Action_3.inf");
	lr_start_transaction("Select Laptop");
	truclient_step("5", "image (2) �摜 �� �N���b�N", "snapshot=Action_5.inf");
	truclient_step("6", "RED �� �N���b�N", "snapshot=Action_6.inf");
	truclient_step("7", "Plus �� �N���b�N", "snapshot=Action_7.inf");
	truclient_step("9", "ADD TO CART �{�^�� �� �N���b�N", "snapshot=Action_9.inf");
	lr_end_transaction("Select Laptop",0);
	lr_start_transaction("Cart Clear");
	truclient_step("11", "element (4) �� �N���b�N", "snapshot=Action_11.inf");
	truclient_step("13", "REMOVE �� �N���b�N", "snapshot=Action_13.inf");
	truclient_step("14", "CONTINUE SHOPPING �����N �� �N���b�N", "snapshot=Action_14.inf");
	lr_end_transaction("Cart Clear",0);

	return 0;
}
