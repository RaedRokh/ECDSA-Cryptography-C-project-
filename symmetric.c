//#include <openssl/evp.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <openssl/ec.h>
//#include <openssl/obj_mac.h>
//#include <openssl/bn.h>
//#include <openssl/err.h>
//#include <time.h>
//
//
//void generate_symmetric_key(unsigned char* key, int key_length) {
//    EVP_CIPHER_CTX* ctx;
//    int success;
//
//    /* initialize the cipher context */
//    ctx = EVP_CIPHER_CTX_new();
//    if (!ctx) {
//        /* handle error */
//    }
//
//    /* generate the key */
//    success = EVP_BytesToKey(EVP_aes_256_cbc(), EVP_sha256(), NULL, key, key_length, 1, NULL, NULL);
//    if (success != 1) {
//        /* handle error */
//    }
//
//    /* clean up the context */
//    EVP_CIPHER_CTX_free(ctx);
//}
//int main() {
//    clock_t start, end;
//    // Start timer
//    start = clock();
//    unsigned char key[32];  // allocate a buffer for the key
//    int key_length = 32;    // set the key length to 256 bits
//
//    generate_symmetric_key(key, key_length);
//
//    // print the generated key as hexadecimal
//    printf("Symmetric key: ");
//    for (int i = 0; i < key_length; i++) {
//        printf("%02x", key[i]);
//    }
//    printf("\n");
//    EVP_CIPHER_CTX* ctx;
//    int ciphertext_len;
//    unsigned char plaintext[] = "test test"; // plaintext message
//    int plaintext_len = strlen((char*)plaintext);
//    // allocate space for the ciphertext
//    unsigned char* ciphertext = malloc(plaintext_len + EVP_MAX_BLOCK_LENGTH);
//
//    // initialize the cipher context
//    ctx = EVP_CIPHER_CTX_new();
//    if (!ctx) {
//        /* handle error */
//    }
//
//    // set up the cipher parameters
//    EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key, NULL);
//
//    // encrypt the message
//    EVP_EncryptUpdate(ctx, ciphertext, &ciphertext_len, plaintext, plaintext_len);
//
//    // finalize the encryption process
//    EVP_EncryptFinal_ex(ctx, ciphertext + ciphertext_len, &ciphertext_len);
//
//    // clean up the cipher context
//    EVP_CIPHER_CTX_free(ctx);
//
//    // print the encrypted message as hexadecimal
//    printf("Encrypted message: ");
//    for (int i = 0; i < ciphertext_len; i++) {
//        printf("%02x", ciphertext[i]);
//    }
//    printf("\n");
//
//    // free the ciphertext buffer
//
//    // allocate space for the decrypted message
//    unsigned char* decrypted = malloc(plaintext_len);
//
//    // initialize the cipher context for decryption
//    ctx = EVP_CIPHER_CTX_new();
//    if (!ctx) {
//        /* handle error */
//    }
//
//    // set up the cipher parameters for decryption
//    EVP_DecryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key, NULL);
//
//    // decrypt the message
//    int decrypted_len;
//    EVP_DecryptUpdate(ctx, decrypted, &decrypted_len, ciphertext, ciphertext_len);
//    EVP_DecryptFinal_ex(ctx, decrypted + decrypted_len, &decrypted_len);
//
//    // clean up the cipher context
//    EVP_CIPHER_CTX_free(ctx);
//
//    // print the decrypted message
//    printf("Decrypted message: %s\n", decrypted);
//    end = clock();
//    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC; // Calculate the elapsed time
//    printf("Elapsed time: %f seconds\n", elapsed_time); // Print the elapsed time
//
//
//    // free the ciphertext and decrypted buffers
//    free(ciphertext);
//    free(decrypted);
//
//
//
//    return 0;
//}
//
