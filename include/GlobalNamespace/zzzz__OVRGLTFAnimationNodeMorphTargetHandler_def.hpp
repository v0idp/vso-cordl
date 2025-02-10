#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimationNodeMorphTargetHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRGLTFAnimationNodeMorphTargetHandler)
namespace GlobalNamespace {
struct OVRMeshData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler);
// Dependencies OVRMeshAttributes, OVRMeshData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFAnimationNodeMorphTargetHandler
class CORDL_TYPE OVRGLTFAnimationNodeMorphTargetHandler : public ::System::Object {
public:
// Declarations
/// @brief Field Weights, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weights, put=__cordl_internal_set_Weights)) ::ArrayW<float_t,::Array<float_t>*>  Weights;

/// @brief Field _meshData, offset 0x10, size 0x48 
 __declspec(property(get=__cordl_internal_get__meshData, put=__cordl_internal_set__meshData)) ::GlobalNamespace::OVRMeshData  _meshData;

/// @brief Field _meshModifiableData, offset 0x68, size 0x30 
 __declspec(property(get=__cordl_internal_get__meshModifiableData, put=__cordl_internal_set__meshModifiableData)) ::GlobalNamespace::OVRMeshAttributes  _meshModifiableData;

/// @brief Field _modified, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__modified, put=__cordl_internal_set__modified)) bool  _modified;

/// @brief Method MarkModified, addr 0x28a02f4, size 0xc, virtual false, abstract: false, final false
inline void MarkModified() ;

static inline ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* New_ctor(::GlobalNamespace::OVRMeshData  meshData) ;

/// @brief Method Update, addr 0x28a10b0, size 0x274, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_Weights() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_Weights() ;

constexpr ::GlobalNamespace::OVRMeshData const& __cordl_internal_get__meshData() const;

constexpr ::GlobalNamespace::OVRMeshData& __cordl_internal_get__meshData() ;

constexpr ::GlobalNamespace::OVRMeshAttributes const& __cordl_internal_get__meshModifiableData() const;

constexpr ::GlobalNamespace::OVRMeshAttributes& __cordl_internal_get__meshModifiableData() ;

constexpr bool const& __cordl_internal_get__modified() const;

constexpr bool& __cordl_internal_get__modified() ;

constexpr void __cordl_internal_set_Weights(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__meshData(::GlobalNamespace::OVRMeshData  value) ;

constexpr void __cordl_internal_set__meshModifiableData(::GlobalNamespace::OVRMeshAttributes  value) ;

constexpr void __cordl_internal_set__modified(bool  value) ;

/// @brief Method .ctor, addr 0x28a1008, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRMeshData  meshData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAnimationNodeMorphTargetHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimationNodeMorphTargetHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGLTFAnimationNodeMorphTargetHandler(OVRGLTFAnimationNodeMorphTargetHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimationNodeMorphTargetHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGLTFAnimationNodeMorphTargetHandler(OVRGLTFAnimationNodeMorphTargetHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6078};

/// @brief Field _meshData, offset: 0x10, size: 0x48, def value: None
 ::GlobalNamespace::OVRMeshData  ____meshData;

/// @brief Field Weights, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___Weights;

/// @brief Field _modified, offset: 0x60, size: 0x1, def value: None
 bool  ____modified;

/// @brief Field _meshModifiableData, offset: 0x68, size: 0x30, def value: None
 ::GlobalNamespace::OVRMeshAttributes  ____meshModifiableData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, ____meshData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, ___Weights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, ____modified) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, ____meshModifiableData) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*, "", "OVRGLTFAnimationNodeMorphTargetHandler");
