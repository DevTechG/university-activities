package com.example.data_hora;
import java.util.Calendar;
import java.util.Date;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Locale;

import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.RecyclerView;

import android.app.DatePickerDialog;
import android.app.TimePickerDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.SystemClock;
import android.os.TestLooperManager;
import android.util.Log;
import android.view.View;
import android.widget.DatePicker;
import android.widget.TextView;
import android.widget.TimePicker;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private TextView txtData, txtHora, txtSegundos;

    int t = 0;

    private Handler handler = new Handler();
    private Runnable runnable;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        findView();

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

                Calendar calendar = Calendar.getInstance();
                calendar.setTimeInMillis(System.currentTimeMillis());

                String hrMin = String.format("%02d:%02d", calendar.get(Calendar.HOUR_OF_DAY), calendar.get(Calendar.MINUTE));
                String seg = String.format(":%02d", calendar.get(Calendar.SECOND));

                DateFormat data = new SimpleDateFormat("dd/MM/yyyy");
                Date date = new Date();
                txtData.setText(data.format(date));

                txtHora.setText(hrMin);
                txtSegundos.setText(seg);

                long time = SystemClock.uptimeMillis();
                time = time%1000;
                handler.postDelayed(this, time);

                Log.i("Handler",""+time);
            }
        };
        handler.post(runnable);
    }
}
