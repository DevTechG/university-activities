package com.example.sincronizacao;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class NotificacaoActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_notificacao2);

        TextView msg = (TextView) findViewById(R.id.tvMsg);
        String mensagem = getIntent().getStringExtra("mensagem");
        msg.setText(mensagem);
    }
}