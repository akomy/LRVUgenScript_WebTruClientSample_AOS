//   ************************************************************************
//   ****   注意: これは実際のスクリプトの読み取り専用表現です。編集する場合は "スクリプトの開発" ボタンを押してください。   ****
//   ************************************************************************

Action()
{
	truclient_step("1", "'http://www.advantageonlineshopping.com/' に 移動", "snapshot=Action_1.inf");
	truclient_step("2", "LAPTOPS Shop Now を クリック", "snapshot=Action_2.inf");
	truclient_step("4", "image (1) 画像 を クリック", "snapshot=Action_4.inf");
	truclient_step("5", "RED を クリック", "snapshot=Action_5.inf");
	truclient_step("6", "Plus を クリック", "snapshot=Action_6.inf");
	truclient_step("7", "ADD TO CART ボタン を クリック", "snapshot=Action_7.inf");
	truclient_step("9", "element (2) を クリック", "snapshot=Action_9.inf");
	truclient_step("11", "HOME リンク を クリック", "snapshot=Action_11.inf");

	return 0;
}
