#pragma once
// IWYU pragma private; include "VROSC/TransformDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformDataModel)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class TransformDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformDataModel);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformDataModel
class CORDL_TYPE TransformDataModel : public ::System::Object {
public:
// Declarations
/// @brief Field IsOpen, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsOpen, put=__cordl_internal_set_IsOpen)) bool  IsOpen;

/// @brief Field IsPinned, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPinned, put=__cordl_internal_set_IsPinned)) bool  IsPinned;

/// @brief Field Position, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) ::ArrayW<float_t,::Array<float_t>*>  Position;

/// @brief Field Rotation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Rotation, put=__cordl_internal_set_Rotation)) ::ArrayW<float_t,::Array<float_t>*>  Rotation;

/// @brief Field Scale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::ArrayW<float_t,::Array<float_t>*>  Scale;

/// @brief Method GetPosition, addr 0x1876970, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition() ;

/// @brief Method GetRotation, addr 0x1876a9c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotation() ;

/// @brief Method GetScale, addr 0x1876be0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetScale() ;

static inline ::VROSC::TransformDataModel* New_ctor() ;

/// @brief Method Reset, addr 0x1873f88, size 0xb8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetPosition, addr 0x18769e8, size 0x9c, virtual false, abstract: false, final false
inline void SetPosition(::UnityEngine::Vector3  position) ;

/// @brief Method SetRotation, addr 0x1876b1c, size 0xac, virtual false, abstract: false, final false
inline void SetRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetScale, addr 0x1876c58, size 0x9c, virtual false, abstract: false, final false
inline void SetScale(::UnityEngine::Vector3  scale) ;

constexpr bool const& __cordl_internal_get_IsOpen() const;

constexpr bool& __cordl_internal_get_IsOpen() ;

constexpr bool const& __cordl_internal_get_IsPinned() const;

constexpr bool& __cordl_internal_get_IsPinned() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_Position() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_Position() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_Rotation() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_Rotation() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_Scale() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_Scale() ;

constexpr void __cordl_internal_set_IsOpen(bool  value) ;

constexpr void __cordl_internal_set_IsPinned(bool  value) ;

constexpr void __cordl_internal_set_Position(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_Rotation(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_Scale(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method .ctor, addr 0x1873318, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformDataModel(TransformDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformDataModel(TransformDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{555};

/// @brief Field Position, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___Position;

/// @brief Field Rotation, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___Rotation;

/// @brief Field Scale, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___Scale;

/// @brief Field IsOpen, offset: 0x28, size: 0x1, def value: None
 bool  ___IsOpen;

/// @brief Field IsPinned, offset: 0x29, size: 0x1, def value: None
 bool  ___IsPinned;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformDataModel, ___Position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformDataModel, ___Rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformDataModel, ___Scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformDataModel, ___IsOpen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformDataModel, ___IsPinned) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformDataModel, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformDataModel*, "VROSC", "TransformDataModel");
