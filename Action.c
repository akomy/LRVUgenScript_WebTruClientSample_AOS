//   ************************************************************************
//   ****   ����: ����͎��ۂ̃X�N���v�g�̓ǂݎ���p�\���ł��B�ҏW����ꍇ�� "�X�N���v�g�̊J��" �{�^���������Ă��������B   ****
//   ************************************************************************

Action()
{
	lr_start_transaction("Top Screen");
	truclient_step("1", "'http://www.advantageonlineshopping.com' �� �ړ�", "snapshot=Action_1.inf");
	truclient_step("2", "LAPTOPS Shop Now �� �N���b�N", "snapshot=Action_2.inf");
	lr_end_transaction("Top Screen",0);
	lr_start_transaction("Select Laptop");
	truclient_step("4", "image (2) �摜 �� �N���b�N", "snapshot=Action_4.inf");
	truclient_step("5", "RED �� �N���b�N", "snapshot=Action_5.inf");
	truclient_step("6", "Plus �� �N���b�N", "snapshot=Action_6.inf");
	truclient_step("8", "ADD TO CART �{�^�� �� �N���b�N", "snapshot=Action_8.inf");
	lr_end_transaction("Select Laptop",0);
	lr_start_transaction("Cart Clear");
	truclient_step("10", "element (4) �� �N���b�N", "snapshot=Action_10.inf");
	truclient_step("12", "REMOVE �� �N���b�N", "snapshot=Action_12.inf");
	truclient_step("13", "CONTINUE SHOPPING �����N �� �N���b�N", "snapshot=Action_13.inf");
	lr_end_transaction("Cart Clear",0);

	return 0;
}
