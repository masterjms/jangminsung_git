package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    boolean isFirstInput = true; //입력값이 처음 입력되는가를 체크
    int resultNumber = 0; //현재 저장된 최종값을 저장하는 변수
    char operator = '+'; //연산기호를 저장하는 변수

    final String CLEAR_INPUT_TEXT = "0";
    TextView resultText;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        resultText = findViewById(R.id.result_text); //xml에 만든 id인 result_text를 resultText로 선언


    }

    public void buttonClick(View view) {

        Button getButton = findViewById(view.getId());

        switch (view.getId()){
            case R.id.all_clear_button:
                isFirstInput = true;
                resultNumber = 0;
                operator = '+';
                resultText.setTextColor(0xFF666666);
                resultText.setText(CLEAR_INPUT_TEXT);
                break;

            case R.id.clar_entry_button:
                isFirstInput = true;
                resultText.setTextColor(0xFF666666);
                resultText.setText(CLEAR_INPUT_TEXT);
                break;

            case R.id.back_space_button:
                if(resultText.getText().toString().length() > 1) {
                    String getResultText = resultText.getText().toString();
                    String substring = getResultText.substring(0,getResultText.length() -1);
                    resultText.setText(substring);
                } else {
                    resultText.setTextColor(0xFF666666);
                    resultText.setText(CLEAR_INPUT_TEXT);
                    isFirstInput = true;
                }

            case R.id.decimal_button:
                break;

            case R.id.addition_button:
            case R.id.subtraction_button:
            case R.id.division_button:
            case R.id.multiply_button:
                int lastNum = Integer.parseInt(resultText.getText().toString());
                if(operator == '+'){
                    resultNumber = resultNumber + lastNum;
                } else if(operator == '-'){
                    resultNumber = resultNumber - lastNum;
                } else if(operator == '/'){
                    resultNumber = resultNumber / lastNum;
                } else if(operator == '*'){
                    resultNumber = resultNumber * lastNum;
                }
                operator = getButton.getText().toString().charAt(0);
                resultText.setText(String.valueOf(resultNumber));
                isFirstInput = true;
                break;

            case R.id.result_button:
                if(operator == '+'){
                    resultNumber = resultNumber + Integer.parseInt(resultText.getText().toString());
                } else if(operator == '-'){
                    resultNumber = resultNumber - Integer.parseInt(resultText.getText().toString());
                } else if(operator == '/'){
                    resultNumber = resultNumber / Integer.parseInt(resultText.getText().toString());
                } else if(operator == '*'){
                    resultNumber = resultNumber * Integer.parseInt(resultText.getText().toString());
                }
                operator = getButton.getText().toString().charAt(0);
                resultText.setText(String.valueOf(resultNumber));
                isFirstInput = true;
                break;

            default:
                Toast.makeText(getApplicationContext(),getButton.getText().toString() + "버튼이 클릭되었습니다.", Toast.LENGTH_LONG).show();
                break;
        }

    }

    public void numButtonClick(View view){
        Button getButton = findViewById(view.getId());

        if(isFirstInput){
            resultText.setTextColor(0xFF000000); //숫자가 입력됬을때 검은색으로 텍스트 변화
            resultText.setText(getButton.getText().toString());
            isFirstInput = false; //첫 숫자가 입력되면 true에서 false로 바뀌며 위 if문 벗어남.
        } else {
           resultText.append(getButton.getText().toString()); //1을 입력할때마다 하나씩 계속 추가됨
        }

    }
    }






