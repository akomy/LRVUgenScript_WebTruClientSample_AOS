//   ************************************************************************
//   ****   注意: これは実際のスクリプトの読み取り専用表現です。編集する場合は "スクリプトの開発" ボタンを押してください。   ****
//   ************************************************************************

Action()
{
	lr_start_transaction("Top Screen");
	truclient_step("1", "'http://www.advantageonlineshopping.com' に 移動", "snapshot=Action_1.inf");
	truclient_step("2", "LAPTOPS Shop Now を クリック", "snapshot=Action_2.inf");
	lr_end_transaction("Top Screen",0);
	lr_start_transaction("Select Laptop");
	truclient_step("4", "image (2) 画像 を クリック", "snapshot=Action_4.inf");
	truclient_step("5", "RED を クリック", "snapshot=Action_5.inf");
	truclient_step("6", "Plus を クリック", "snapshot=Action_6.inf");
	truclient_step("8", "ADD TO CART ボタン を クリック", "snapshot=Action_8.inf");
	lr_end_transaction("Select Laptop",0);
	lr_start_transaction("Cart Clear");
	truclient_step("10", "element (4) を クリック", "snapshot=Action_10.inf");
	truclient_step("12", "REMOVE を クリック", "snapshot=Action_12.inf");
	truclient_step("13", "CONTINUE SHOPPING リンク を クリック", "snapshot=Action_13.inf");
	lr_end_transaction("Cart Clear",0);

	return 0;
}
