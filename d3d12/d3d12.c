// Copyright (c) 2024 Tipz Team
// SPDX-License-Identifier: BSD-2-Clause

#include <minwindef.h>
#include <guiddef.h>
#include <d3dcommon.h>
#include <winerror.h>

#define DEFAULT_RETURN E_NOINTERFACE

typedef enum D3D_ROOT_SIGNATURE_VERSION
{
    D3D_ROOT_SIGNATURE_VERSION_1 = 0x1,
    D3D_ROOT_SIGNATURE_VERSION_1_0 = 0x1,
    D3D_ROOT_SIGNATURE_VERSION_1_1 = 0x2,
} D3D_ROOT_SIGNATURE_VERSION;

HRESULT D3D12CreateRootSignatureDeserializer(const void *data, SIZE_T data_size, REFIID iid, void **deserializer) {
    return DEFAULT_RETURN;
}

HRESULT D3D12SerializeRootSignature(const void *root_signature_desc, D3D_ROOT_SIGNATURE_VERSION version, void **blob, void **error_blob) {
    return DEFAULT_RETURN;
}

HRESULT D3D12SerializeVersionedRootSignature(const void *root_signature_desc, void **blob, void **error_blob) {
    return DEFAULT_RETURN;
}

HRESULT D3D12CreateDevice(void *adapter, D3D_FEATURE_LEVEL minimum_feature_level, REFIID iid, void **device) {
    return DEFAULT_RETURN;
}

HRESULT D3D12GetDebugInterface(REFIID iid, void **debug) {
    return DEFAULT_RETURN;
}

HRESULT __stdcall D3D12EnableExperimentalFeatures(UINT feature_count, const IID *iids, void *configurations, UINT *configurations_sizes) {
    return DEFAULT_RETURN;
}
