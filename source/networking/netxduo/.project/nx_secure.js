

files = [
    "nx_secure_x509_remote_endpoint_certificate_get.c",
    "nxe_secure_dtls_server_session_send.c",
    "nx_secure_tls_check_protocol_version.c",
    "nx_secure_dtls_server_local_certificate_add.c",
    "nx_secure_tls_remote_certificate_free.c",
    "nxe_secure_dtls_server_psk_add.c",
    "nx_secure_dtls_server_protocol_version_override.c",
    "nx_secure_tls_send_record.c",
    "nxe_secure_dtls_session_local_certificate_add.c",
    "nx_secure_crypto_method_self_test_aes.c",
    "nx_secure_tls_process_clienthello.c",
    "nx_secure_tls_send_encrypted_extensions.c",
    "nx_secure_x509_certificate_list_find.c",
    "nx_secure_tls_process_encrypted_extensions.c",
    "nx_secure_tls_session_send.c",
    "nx_secure_tls_psk_binder_generate.c",
    "nx_secure_dtls_session_client_info_get.c",
    "nx_secure_x509_local_certificate_find.c",
    "nx_secure_x509_store_certificate_find.c",
    "nx_secure_dtls_server_notify_set.c",
    "nx_secure_tls_hash_record.c",
    "nxe_secure_tls_server_certificate_find.c",
    "nx_secure_x509_certificate_list_add.c",
    "nx_secure_tls_remote_certificate_verify.c",
    "nxe_secure_dtls_server_delete.c",
    "nx_secure_tls_server_handshake.c",
    "nx_secure_tls_process_finished.c",
    "nx_secure_tls_session_renegotiate_callback_set.c",
    "nx_secure_dtls_retransmit.c",
    "nx_secure_x509_certificate_initialize.c",
    "nxe_secure_tls_session_protocol_version_override.c",
    "nxe_secure_tls_session_time_function_set.c",
    "nxe_secure_tls_session_create.c",
    "nx_secure_tls_1_3_crypto_init.c",
    "nxe_secure_dtls_session_local_certificate_remove.c",
    "nx_secure_tls_local_certificate_add.c",
    "nxe_secure_x509_key_usage_extension_parse.c",
    "nx_secure_tls_server_certificate_remove.c",
    "nx_secure_dtls_server_local_certificate_remove.c",
    "nx_secure_tls_psk_find.c",
    "nx_secure_tls_session_server_callback_set.c",
    "nx_secure_tls_remote_certificate_free_all.c",
    "nx_secure_dtls_server_session_send.c",
    "nx_secure_tls_send_clienthello_extensions.c",
    "nx_secure_tls_session_client_callback_set.c",
    "nx_secure_tls_generate_premaster_secret.c",
    "nxe_secure_dtls_server_trusted_certificate_remove.c",
    "nx_secure_dtls_server_stop.c",
    "nxe_secure_dtls_client_protocol_version_override.c",
    "nx_secure_tls_generate_keys.c",
    "nx_secure_tls_key_material_init.c",
    "nxe_secure_tls_session_sni_extension_set.c",
    "nx_secure_tls_record_payload_encrypt.c",
    "nx_secure_x509_extended_key_usage_extension_parse.c",
    "nx_secure_tls_process_clienthello_extensions.c",
    "nx_secure_tls_process_certificate_verify.c",
    "nx_secure_tls_process_serverhello.c",
    "nx_secure_tls_metadata_size_calculate.c",
    "nx_secure_process_server_key_exchange.c",
    "nx_secure_process_client_key_exchange.c",
    "nxe_secure_dtls_session_reset.c",
    "nxe_secure_dtls_session_end.c",
    "nx_secure_tls_ciphersuite_lookup.c",
    "nx_secure_tls_record_payload_decrypt.c",
    "nx_secure_crypto_method_self_test_sha.c",
    "nx_secure_tls_session_sni_extension_parse.c",
    "nx_secure_tls_psk_add.c",
    "nx_secure_dtls_session_delete.c",
    "nx_secure_x509_asn1_tlv_block_parse.c",
    "nxe_secure_tls_trusted_certificate_add.c",
    "nx_secure_dtls_session_sliding_window_check.c",
    "nx_secure_x509_certificate_revocation_list_parse.c",
    "nxe_secure_tls_trusted_certificate_remove.c",
    "nxe_secure_dtls_session_trusted_certificate_remove.c",
    "nxe_secure_dtls_session_start.c",
    "nx_secure_generate_session_keys.c",
    "nx_secure_tls_psk_identity_find.c",
    "nx_secure_tls_newest_supported_version.c",
    "nx_secure_tls_packet_allocate.c",
    "nx_secure_tls_send_certificate_verify.c",
    "nx_secure_tls_process_newsessionticket.c",
    "nxe_secure_dtls_server_trusted_certificate_add.c",
    "nx_secure_tls_1_3_finished_hash_generate.c",
    "nx_secure_dtls_send_handshake_record.c",
    "nx_secure_tls_session_receive.c",
    "nx_secure_tls_handshake_hash_update.c",
    "nx_secure_x509_store_certificate_add.c",
    "nx_secure_tls_session_packet_buffer_set.c",
    "nx_secure_tls_map_error_to_alert.c",
    "nxe_secure_dtls_server_x509_client_verify_configure.c",
    "nx_secure_dtls_session_end.c",
    "nx_secure_tls_trusted_certificate_add.c",
    "nx_secure_dtls_send_clienthello.c",
    "nxe_secure_dtls_session_trusted_certificate_add.c",
    "nxe_secure_dtls_session_client_info_get.c",
    "nx_secure_dtls_server_x509_client_verify_disable.c",
    "nx_secure_tls_process_header.c",
    "nxe_secure_dtls_server_stop.c",
    "nx_secure_tls_process_server_key_exchange.c",
    "nx_secure_tls_process_client_key_exchange.c",
    "nxe_secure_dtls_server_protocol_version_override.c",
    "nx_secure_x509_crl_revocation_check.c",
    "nx_secure_dtls_session_local_certificate_remove.c",
    "nx_secure_crypto_method_self_test_md5.c",
    "nxe_secure_dtls_client_session_start.c",
    "nxe_secure_tls_client_psk_set.c",
    "nx_secure_x509_distinguished_name_parse.c",
    "nxe_secure_tls_metadata_size_calculate.c",
    "nxe_secure_tls_local_certificate_find.c",
    "nx_secure_tls_send_alert.c",
    "nx_secure_tls_session_protocol_version_override.c",
    "nx_secure_tls_shutdown.c",
    "nx_secure_tls_1_3_transcript_hash_save.c",
    "nx_secure_generate_master_secret.c",
    "nx_secure_dtls_session_create.c",
    "nxe_secure_tls_session_client_verify_disable.c",
    "nx_secure_crypto_method_self_test_3des.c",
    "nx_secure_dtls_server_ecc_initialize.c",
    "nxe_secure_x509_certificate_initialize.c",
    "nx_secure_tls_process_handshake_header.c",
    "nx_secure_tls_send_certificate_request.c",
    "nx_secure_tls_process_record.c",
    "nx_secure_tls_session_x509_client_verify_configure.c",
    "nxe_secure_tls_session_renegotiate.c",
    "nx_secure_dtls_client_protocol_version_override.c",
    "nx_secure_dtls_send_serverhello.c",
    "nx_secure_tls_1_3_session_keys_set.c",
    "nx_secure_tls_server_certificate_find.c",
    "nxe_secure_dtls_session_send.c",
    "nx_secure_dtls_session_send.c",
    "nx_secure_x509_store_certificate_remove.c",
    "nx_secure_x509_certificate_verify.c",
    "nxe_secure_tls_session_certificate_callback_set.c",
    "nx_secure_tls_process_changecipherspec.c",
    "nxe_secure_tls_session_delete.c",
    "nxe_secure_dtls_server_session_start.c",
    "nx_secure_tls_remote_certificate_allocate.c",
    "nxe_secure_dtls_server_start.c",
    "nx_secure_dtls_server_start.c",
    "nx_secure_dtls_ecc_initialize.c",
    "nx_secure_tls_client_handshake.c",
    "nx_secure_tls_local_certificate_find.c",
    "nx_secure_tls_remote_certificate_buffer_allocate.c",
    "nxe_secure_tls_session_send.c",
    "nx_secure_dtls_server_trusted_certificate_add.c",
    "nxe_secure_dtls_server_create.c",
    "nx_secure_x509_extension_find.c",
    "nx_secure_tls_handshake_process.c",
    "nx_secure_dtls_retransmit_queue_flush.c",
    "nxe_secure_dtls_server_ecc_initialize.c",
    "nx_secure_verify_mac.c",
    "nx_secure_x509_key_usage_extension_parse.c",
    "nx_secure_tls_session_time_function_set.c",
    "nx_secure_dtls_server_x509_client_verify_configure.c",
    "nxe_secure_x509_crl_revocation_check.c",
    "nx_secure_dtls_verify_mac.c",
    "nx_secure_module_hash_compute.c",
    "nxe_secure_dtls_server_local_certificate_add.c",
    "nx_secure_dtls_session_cache.c",
    "nx_secure_tls_find_curve_method.c",
    "nx_secure_dtls_packet_allocate.c",
    "nx_secure_tls_session_keys_set.c",
    "nxe_secure_tls_session_client_verify_enable.c",
    "nxe_secure_tls_session_sni_extension_parse.c",
    "nx_secure_tls_initialize.c",
    "nx_secure_session_keys_set.c",
    "nx_secure_remote_certificate_verify.c",
    "nxe_secure_tls_remote_certificate_buffer_allocate.c",
    "nx_secure_dtls_psk_add.c",
    "nxe_secure_tls_session_renegotiate_callback_set.c",
    "nxe_secure_tls_session_alert_value_get.c",
    "nxe_secure_dtls_ecc_initialize.c",
    "nx_secure_dtls_receive_callback.c",
    "nx_secure_dtls_process_helloverifyrequest.c",
    "nx_secure_generate_server_key_exchange.c",
    "nx_secure_tls_client_psk_set.c",
    "nx_secure_tls_session_receive_records.c",
    "nx_secure_tls_1_3_client_handshake.c",
    "nxe_secure_tls_psk_add.c",
    "nx_secure_generate_client_key_exchange.c",
    "nx_secure_tls_session_renegotiate.c",
    "nxe_secure_tls_session_packet_pool_set.c",
    "nxe_secure_x509_extension_find.c",
    "nx_secure_tls_record_hash_initialize.c",
    "nxe_secure_tls_session_client_callback_set.c",
    "nx_secure_dtls_client_session_start.c",
    "nxe_secure_tls_remote_certificate_free_all.c",
    "nxe_secure_tls_session_server_callback_set.c",
    "nx_secure_tls_send_finished.c",
    "nx_secure_x509_subject_alt_names_find.c",
    "nx_secure_tls_local_certificate_remove.c",
    "nxe_secure_dtls_server_x509_client_verify_disable.c",
    "nx_secure_dtls_process_clienthello.c",
    "nx_secure_tls_send_hellorequest.c",
    "nxe_secure_dtls_packet_allocate.c",
    "nxe_secure_tls_session_receive.c",
    "nxe_secure_dtls_server_local_certificate_remove.c",
    "nx_secure_generate_premaster_secret.c",
    "nxe_secure_tls_session_x509_client_verify_configure.c",
    "nx_secure_x509_expiration_check.c",
    "nx_secure_x509_oid_parse.c",
    "nx_secure_tls_trusted_certificate_remove.c",
    "nx_secure_dtls_session_sliding_window_update.c",
    "nx_secure_dtls_send_record.c",
    "nx_secure_tls_session_client_verify_enable.c",
    "nx_secure_trusted_certificate_add.c",
    "nx_secure_dtls_process_handshake_header.c",
    "nx_secure_crypto_method_self_test_des.c",
    "nx_secure_tls_session_delete.c",
    "nx_secure_dtls_server_handshake.c",
    "nx_secure_crypto_method_self_test_hmac_md5.c",
    "nx_secure_x509_pkcs1_rsa_private_key_parse.c",
    "nx_secure_dtls_session_local_certificate_add.c",
    "nxe_secure_dtls_session_create.c",
    "nx_secure_dtls_hash_record.c",
    "nx_secure_tls_session_sni_extension_set.c",
    "nx_secure_dtls_server_create.c",
    "nxe_secure_tls_server_certificate_remove.c",
    "nx_secure_x509_certificate_chain_verify.c",
    "nx_secure_tls_send_newsessionticket.c",
    "nx_secure_dtls_server_session_start.c",
    "nx_secure_tls_ecc_generate_keys.c",
    "nx_secure_x509_distinguished_name_compare.c",
    "nx_secure_tls_send_serverhello_extensions.c",
    "nx_secure_x509.c",
    "nx_secure_x509_find_certificate_methods.c",
    "nxe_secure_tls_server_certificate_add.c",
    "nxe_secure_x509_common_name_dns_check.c",
    "nx_secure_x509_find_curve_method.c",
    "nx_secure_dtls_process_header.c",
    "nx_secure_tls_send_serverhello.c",
    "nx_secure_tls_process_serverhello_extensions.c",
    "nx_secure_dtls_allocate_handshake_packet.c",
    "nx_secure_dtls_server_trusted_certificate_remove.c",
    "nx_secure_x509_ec_private_key_parse.c",
    "nxe_secure_tls_remote_certificate_allocate.c",
    "nx_secure_x509_crl_verify.c",
    "nx_secure_tls_active_certificate_set.c",
    "nxe_secure_tls_session_start.c",
    "nx_secure_tls_session_iv_size_get.c",
    "nx_secure_tls_send_handshake_record.c",
    "nxe_secure_tls_session_end.c",
    "nxe_secure_dtls_psk_add.c",
    "nx_secure_tls_allocate_handshake_packet.c",
    "nx_secure_tls_session_start.c",
    "nx_secure_dtls_session_trusted_certificate_add.c",
    "nx_secure_tls_record_hash_calculate.c",
    "nx_secure_dtls_server_delete.c",
    "nxe_secure_tls_local_certificate_add.c",
    "nx_secure_tls_protocol_version_get.c",
    "nx_secure_tls_verify_mac.c",
    "nxe_secure_dtls_session_delete.c",
    "nx_secure_dtls_send_helloverifyrequest.c",
    "nx_secure_crypto_method_self_test_hmac_sha.c",
    "nx_secure_tls_session_reset.c",
    "nxe_secure_tls_session_reset.c",
    "nx_secure_dtls_client_handshake.c",
    "nx_secure_dtls_initialize.c",
    "nxe_secure_tls_session_packet_buffer_set.c",
    "nx_secure_tls_session_create.c",
    "nx_secure_tls_send_client_key_exchange.c",
    "nx_secure_tls_send_server_key_exchange.c",
    "nx_secure_tls_session_client_verify_disable.c",
    "nx_secure_x509_dns_name_initialize.c",
    "nxe_secure_tls_packet_allocate.c",
    "nxe_secure_dtls_session_receive.c",
    "nx_secure_x509_pkcs7_decode.c",
    "nx_secure_tls_record_hash_update.c",
    "nx_secure_tls_session_packet_pool_set.c",
    "nx_secure_crypto_table_self_test.c",
    "nx_secure_tls_session_create_ext.c",
    "nx_secure_dtls_process_record.c",
    "nx_secure_tls_server_certificate_add.c",
    "nx_secure_x509_common_name_dns_check.c",
    "nx_secure_x509_certificate_list_remove.c",
    "nx_secure_dtls_server_psk_add.c",
    "nx_secure_tls_send_clienthello.c",
    "nx_secure_tls_session_certificate_callback_set.c",
    "nx_secure_tls_session_alert_value_get.c",
    "nx_secure_tls_process_remote_certificate.c",
    "nx_secure_crypto_method_self_test_rsa.c",
    "nx_secure_crypto_rng_self_test.c",
    "nx_secure_dtls_session_reset.c",
    "nxe_secure_x509_extended_key_usage_extension_parse.c",
    "nxe_secure_dtls_server_notify_set.c",
    "nx_secure_x509_wildcard_compare.c",
    "nxe_secure_tls_active_certificate_set.c",
    "nx_secure_tls_session_end.c",
    "nx_secure_tls_handshake_hash_init.c",
    "nx_secure_tls_ecc_initialize.c",
    "nx_secure_crypto_method_self_test_prf.c",
    "nx_secure_dtls_session_start.c",
    "nx_secure_dtls_session_receive.c",
    "nx_secure_tls_send_changecipherspec.c",
    "nx_secure_dtls_session_trusted_certificate_remove.c",
    "nx_secure_tls_1_3_server_handshake.c",
    "nx_secure_x509_local_device_certificate_get.c",
    "nx_secure_tls_process_certificate_request.c",
    "nx_secure_tls_finished_hash_generate.c",
    "nxe_secure_x509_dns_name_initialize.c",
    "nx_secure_tls_packet_release.c",
    "nx_secure_x509_free_certificate_get.c",
    "nxe_secure_tls_local_certificate_remove.c",
    "nx_secure_tls_1_3_generate_keys.c",
    "nx_secure_tls_send_certificate.c",
];

file_dirs = [
    "${MCU_PLUS_SDK_PATH}/source/networking/netxduo/netxduo_src/nx_secure/src",
];

includes = [
    "${MCU_PLUS_SDK_PATH}/source/networking/netxduo/netxduo_src/nx_secure/inc",
    "${MCU_PLUS_SDK_PATH}/source/networking/netxduo/netxduo_src/nx_secure/ports",
];

module.exports = {
    files,
    file_dirs,
    includes
};