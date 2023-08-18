package com.example.myapplication;

import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.TextView;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Locale;

public class MainActivity extends AppCompatActivity {

    private boolean tA; //tela ativa

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tvData = findViewById(R.id.tvData);
        TextView tvHora = findViewById(R.id.tvHora);
        tA = true;

        mostrarHoras();
    }

    protected void onPause() {

        super.onPause();

        tA = false;
    }

    @RequiresApi(api = Build.VERSION_CODES.0)
    protected void onResume() {

        super.onResume();

        tA = true;
        mostrarHoras();

    }

    //@RequiresApi(api = Build.VERSION_CODES.0)
    private void mostrarHoras() {

        Handler handler = new Handler ();
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd:MM:yyyy HH:mm:ss");

        handler.post(new Runnable() {
            @Override
            public void run() {
                String dt[] = dtf.format(LocalDateTime.now()).split(" ");
                tvData.setText(dt[0]);
                tvHora.setTExt(dt[1]);
                //if (tA == false)
                  //  return;
                if (tA)
                    handler.postDelayed(this,200);
            }
        })

    }
}