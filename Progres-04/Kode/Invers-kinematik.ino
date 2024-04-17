void FR(float x, float y, float h) { //Kanan Atas (KUADRANT 2)
  angle1 = round ((atan(y / x) * 180 / M_PI) + 180);
  sdtcoxa = ((((round(angle1 - legoffset[2]) + 195) - 2)) + offsetCX[0]) * 3.41;
  z = heightFront + h;
  P = sqrt((x * x) + (y * y));
  alas = P - cx;
  c = sqrt((alas * alas) + (z * z));
  alpha = atan(z / alas);
  beta = acos((fm * fm + c * c - tb * tb) / (2 * fm * c));
  theta2 = alpha + beta;
  sdtfemur = ((300 - (90 + round ((theta2 * 180 / M_PI)))) + rightFM) * 3.41;
  theta3 = acos((tb * tb + fm * fm - c * c) / (2 * tb * fm));
  sdttibia = ((300 - (90 - (round((theta3 * 180 / M_PI) - 90)))) + rightTB) * 3.41;
  //Simpan Sudut Output ke Variabel Sudut tiap Servo utk dikirim
  outServo[0][0] = round(sdtcoxa);
  outServo[0][1] = round(sdtfemur);
  outServo[0][2] = round(sdttibia);

   Serial.println("FRONT RIGHT :");
   Serial.print("CX :");
   Serial.println(sdtcoxa);
   Serial.print("FM :");
   Serial.println(sdtfemur);
   Serial.print("TB :");
   Serial.println(sdttibia);
}

void BR (float x, float y, float h) { //Kanan Bawah (KUADRANT 3)
  angle1 = round ((atan(y / x) * 180 / M_PI) + 180); //Kanan Bawah
  sdtcoxa = ((round(angle1 - legoffset[4]) + 105) + offsetCX[1]) * 3.41;
  z = heightBack + h;
  P = sqrt((x * x) + (y * y));
  alas = P - cx;
  c = sqrt((alas * alas) + (z * z));
  alpha = atan(z / alas);
  beta = acos((fm * fm + c * c - tb * tb) / (2 * fm * c));
  theta2 = alpha + beta;
  sdtfemur = ((300 - (90 + round ((theta2 * 180 / M_PI)))) + rightFM) * 3.41;

  theta3 = acos((tb * tb + fm * fm - c * c) / (2 * tb * fm));
  sdttibia = (((300 - (90 - (round((theta3 * 180 / M_PI) - 90)))) - 17 ) + rightTB) * 3.41;
  outServo[2][0] = round(sdtcoxa);
  outServo[2][1] = round(sdtfemur);
  outServo[2][2] = round(sdttibia);
   Serial.println("BACK RIGHT :");
   Serial.print("CX :");
   Serial.println(sdtcoxa);
   Serial.print("FM :");
   Serial.println(sdtfemur);
   Serial.print("TB :");
   Serial.println(sdttibia);
}

void BL (float x, float y, float h) { //Kiri Bawah (KUADRANT 4)
  angle1 = round ((atan(y / x) * 180 / M_PI) + 360);
  sdtcoxa = ((round(angle1 - legoffset[5]) + 195) + offsetCX[2]) * 3.41;
  z = heightBack + h;
  P = sqrt((x * x) + (y * y));
  alas = P - cx;
  c = sqrt((alas * alas) + (z * z));

  alpha = atan(z / alas);
  beta = acos((fm * fm + c * c - tb * tb) / (2 * fm * c));
  theta2 = alpha + beta;
  sdtfemur = ((90 + round ((theta2 * 180 / M_PI))) + leftFM) * 3.41;

  theta3 = acos((tb * tb + fm * fm - c * c) / (2 * tb * fm));
  sdttibia = (((90 - (round((theta3 * 180 / M_PI) - 90)))) + leftTB) * 3.41;
  outServo[3][0] = round(sdtcoxa);
  outServo[3][1] = round(sdtfemur);
  outServo[3][2] = round(sdttibia);
   Serial.println("BACK LEFT :");
   Serial.print("CX :");
   Serial.println(sdtcoxa);
   Serial.print("FM :");
   Serial.println(sdtfemur);
   Serial.print("TB :");
   Serial.println(sdttibia);
}


void FL (float x, float y, float h) { //Kiri Atas (KUADRANT 1)
  angle1 = round ((atan(y / x) * 180 / M_PI));
  sdtcoxa = (((round(angle1 - legoffset[1]) + 105) + 20) + offsetCX[3]) * 3.41;
  z = heightFront + h;
  P = sqrt((x * x) + (y * y));
  alas = P - cx;
  c = sqrt((alas * alas) + (z * z));
  alpha = atan(z / alas);
  beta = acos((fm * fm + c * c - tb * tb) / (2 * fm * c));
  theta2 = alpha + beta;
  sdtfemur = ((90 + round ((theta2 * 180 / M_PI))) + leftFM) * 3.41;

  theta3 = acos((tb * tb + fm * fm - c * c) / (2 * tb * fm));
  sdttibia = ((((90 - (round((theta3 * 180 / M_PI) - 90)))) + 3) + leftTB) * 3.41;
  outServo[5][0] = round(sdtcoxa);
  outServo[5][1] = round(sdtfemur);
  outServo[5][2] = round(sdttibia);
   Serial.println("FRONT LEFT :");
   Serial.print("CX :");
   Serial.println(sdtcoxa);
   Serial.print("FM :");
   Serial.println(sdtfemur);
   Serial.print("TB :");
   Serial.println(sdttibia);
}
