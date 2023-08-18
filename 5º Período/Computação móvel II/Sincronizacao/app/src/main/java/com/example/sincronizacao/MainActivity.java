package com.example.sincronizacao;

import androidx.appcompat.app.AppCompatActivity;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.wearable.Wearable;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    final EditText msg = (EditText) findViewById(R.id.edtMensagem);
    Button envia = (Button) findViewById(R.id.btnEnviar);
    envia.setOnClickListener (new View.OnClickListener () {
        @Override
        public void onClick(View view) {
            Intent intent = new Intent(MainActivity.this, NotificacaoActivity.class);
            intent.putExtra("mensagem",msg.getText().toString());
            int id = (int) (Math.random()*1000);
            PendingIntent pi = PendingIntent.getActivity(getBaseContext(), id, intent, PendingIntent.FLAG_UPDATE_CURRENT);
            Notification notification = new Notification.Builder(getBaseContext())
                    .setContentTitle("Testando")
                    .setContentText(msg.getText()).setSmallIcon(R.mipmap.ic_launcher)
                    .setContentIntent(pi).build();
            NotificationManager notificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
            notification.flags |= Notification.FLAG_AUTO_CANCEL;
            notificationManager.notify(id, notification);
        }
    });
}

    GoogleApiClient mGoogleApiClient = new GoogleApiClient.Builder(this)
            .addConnectionCallbacks(new GoogleApiClient.ConnectionCallbacks() {
                @Override
                public void onConnected(Bundle connectionHint) {
                    Log.d("TAG", "onConnected: " + connectionHint);
                    // Now you can use the Data Layer API
                }
                @Override
                public void onConnectionSuspended(int cause) {
                    Log.d("TAG", "onConnectionSuspended: " + cause);
                }
            })
            .addOnConnectionFailedListener(new GoogleApiClient.OnConnectionFailedListener() {
                @Override
                public void onConnectionFailed(ConnectionResult result) {
                    Log.d("TAG", "onConnectionFailed: " + result);
                }
            })
            // Request access only to the Wearable API
            .addApi(Wearable.API)
            .build();
}