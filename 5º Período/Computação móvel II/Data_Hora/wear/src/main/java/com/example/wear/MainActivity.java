package com.example.wear;

import android.app.Activity;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.widget.TextView;
import android.os.SystemClock;
import com.example.wear.databinding.ActivityMainBinding;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class MainActivity extends Activity {
    private TextView txtData, txtHora,txtSegundos;
    private ActivityMainBinding binding;
    private Handler handler = new Handler();
    private Runnable runnable;
    int t = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

     binding = ActivityMainBinding.inflate(getLayoutInflater());
     setContentView(binding.getRoot());

        findView();

        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(System.currentTimeMillis());

       Atualizar();
    }

    public void findView(){
        txtData = findViewById(R.id.Data);
        txtHora = findViewById(R.id.Hora);
        txtSegundos = findViewById(R.id.Segundos);
    }

    public void Atualizar(){
        runnable = new Runnable() {
            @Override
            public void run() {
                Log.i("Handler",""+t);
                t++;
                Calendar calendar = Calendar.getInstance();
                calendar.setTimeInMillis(System.currentTimeMillis());

                String hrMin = String.format("%02d:%02d", calendar.get(Calendar.HOUR_OF_DAY), calendar.get(Calendar.MINUTE));
                String seg = String.format(":%02d", calendar.get(Calendar.SECOND));

                DateFormat data = new SimpleDateFormat("dd/MM/yyyy");
                Date date = new Date();
                txtData.setText(data.format(date));

                txtHora.setText(hrMin);
                txtSegundos.setText(seg);
                handler.postDelayed(this, 333);
            }
        };
        handler.postDelayed(runnable, 333);
    }
}