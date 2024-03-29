//#include <stdio.h>
//#include <stdlib.h>
//#include <openssl/evp.h>
//#include <openssl/pem.h>
//
//
//
//void main() {
//    FILE* publicKeyFile = fopen("ec-secp256k1-pub-key.pem", "rb");
//    fseek(publicKeyFile, 0, SEEK_END);
//    long publicKeySize = ftell(publicKeyFile);
//    rewind(publicKeyFile);
//    unsigned char* publicKeyBuffer = (unsigned char*)malloc(publicKeySize);
//    publicKeyBuffer[publicKeySize] = '\0';
//    fread(publicKeyBuffer, publicKeySize, 1, publicKeyFile);
//    fclose(publicKeyFile);
//
//    FILE* privateKeyFile = fopen("ec-secp256k1-priv-key.pem", "rb");
//    fseek(privateKeyFile, 0, SEEK_END);
//    long privateKeySize = ftell(privateKeyFile);
//    rewind(privateKeyFile);
//    unsigned char* privateKeyBuffer = (unsigned char*)malloc(privateKeySize);
//    fread(privateKeyBuffer, privateKeySize, 1, privateKeyFile);
//    fclose(privateKeyFile);
//
//    EVP_PKEY* pub_key = EVP_PKEY_new();
//    PEM_read_bio_PUBKEY(BIO_new_mem_buf(publicKeyBuffer, publicKeySize), &pub_key, NULL, NULL);
//
//    BIO* pub_out = BIO_new_fp(stdout, BIO_NOCLOSE);
//    EVP_PKEY_print_public(pub_out, pub_key, 0, NULL);
//    BIO_free(pub_out);
//
//    EVP_PKEY* priv_key = EVP_PKEY_new();
//    PEM_read_bio_PrivateKey(BIO_new_mem_buf(privateKeyBuffer, privateKeySize), &priv_key, NULL, NULL);
//
//    BIO* priv_out = BIO_new_fp(stdout, BIO_NOCLOSE);
//    EVP_PKEY_print_private(priv_out, priv_key, 0, NULL);
//    BIO_free(priv_out);
//
//    EVP_PKEY_free(pub_key);
//    EVP_PKEY_free(priv_key);
//    free(publicKeyBuffer);
//    free(privateKeyBuffer);
//}
