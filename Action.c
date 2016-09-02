//   ************************************************************************
//   ****   注意: これは実際のスクリプトの読み取り専用表現です。編集する場合は "スクリプトの開発" ボタンを押してください。   ****
//   ************************************************************************

Action()
{
	truclient_step("3", "'http://www.advantageonlineshopping.com' に 移動", "snapshot=Action_3.inf");
	truclient_step("4", "LAPTOPS Shop Now を クリック", "snapshot=Action_4.inf");
	truclient_step("6", "image (2) 画像 を クリック", "snapshot=Action_6.inf");
	truclient_step("7", "GRAY を クリック", "snapshot=Action_7.inf");
	truclient_step("8", "Plus を クリック", "snapshot=Action_8.inf");
	truclient_step("9", "ADD TO CART ボタン を クリック", "snapshot=Action_9.inf");
	truclient_step("11", "element (3) を クリック", "snapshot=Action_11.inf");
	truclient_step("13", "element (2) を クリック", "snapshot=Action_13.inf");
	truclient_step("15", "HOME リンク を クリック", "snapshot=Action_15.inf");

	return 0;
}
