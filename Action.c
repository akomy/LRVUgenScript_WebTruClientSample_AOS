//   ************************************************************************
//   ****   ����: ����͎��ۂ̃X�N���v�g�̓ǂݎ���p�\���ł��B�ҏW����ꍇ�� "�X�N���v�g�̊J��" �{�^���������Ă��������B   ****
//   ************************************************************************

Action()
{
	truclient_step("1", "'http://www.advantageonlineshopping.com/' �� �ړ�", "snapshot=Action_1.inf");
	truclient_step("2", "LAPTOPS Shop Now �� �N���b�N", "snapshot=Action_2.inf");
	truclient_step("4", "image (1) �摜 �� �N���b�N", "snapshot=Action_4.inf");
	truclient_step("5", "RED �� �N���b�N", "snapshot=Action_5.inf");
	truclient_step("6", "Plus �� �N���b�N", "snapshot=Action_6.inf");
	truclient_step("7", "ADD TO CART �{�^�� �� �N���b�N", "snapshot=Action_7.inf");
	truclient_step("9", "element (2) �� �N���b�N", "snapshot=Action_9.inf");
	truclient_step("11", "HOME �����N �� �N���b�N", "snapshot=Action_11.inf");

	return 0;
}
