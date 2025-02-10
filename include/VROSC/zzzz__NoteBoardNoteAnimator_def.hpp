#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoardNoteAnimator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NoteBoardNote;
}
namespace VROSC {
class NotefieldColorSettings;
}
namespace VROSC {
struct PlayData;
}
namespace VROSC {
struct TransmissionData;
}
// Forward declare root types
namespace VROSC {
class NoteBoardNoteAnimator;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardNoteAnimator);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteAnimator
class CORDL_TYPE NoteBoardNoteAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HightlightColor, put=set_HightlightColor)) ::UnityEngine::Vector3  HightlightColor;

 __declspec(property(get=get_HoveringAmount, put=set_HoveringAmount)) float_t  HoveringAmount;

 __declspec(property(get=get_InputPower, put=set_InputPower)) ::UnityEngine::Vector3  InputPower;

 __declspec(property(get=get_Velocity, put=set_Velocity)) float_t  Velocity;

 __declspec(property(get=get_VisualEffectPower, put=set_VisualEffectPower)) ::UnityEngine::Vector3  VisualEffectPower;

/// @brief Field <HightlightColor>k__BackingField, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__HightlightColor_k__BackingField, put=__cordl_internal_set__HightlightColor_k__BackingField)) ::UnityEngine::Vector3  _HightlightColor_k__BackingField;

/// @brief Field <HoveringAmount>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__HoveringAmount_k__BackingField, put=__cordl_internal_set__HoveringAmount_k__BackingField)) float_t  _HoveringAmount_k__BackingField;

/// @brief Field <InputPower>k__BackingField, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__InputPower_k__BackingField, put=__cordl_internal_set__InputPower_k__BackingField)) ::UnityEngine::Vector3  _InputPower_k__BackingField;

/// @brief Field <Velocity>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__Velocity_k__BackingField, put=__cordl_internal_set__Velocity_k__BackingField)) float_t  _Velocity_k__BackingField;

/// @brief Field <VisualEffectPower>k__BackingField, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__VisualEffectPower_k__BackingField, put=__cordl_internal_set__VisualEffectPower_k__BackingField)) ::UnityEngine::Vector3  _VisualEffectPower_k__BackingField;

/// @brief Field _baseScale, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__baseScale, put=__cordl_internal_set__baseScale)) ::UnityEngine::Vector3  _baseScale;

/// @brief Field _hovering, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__hovering, put=__cordl_internal_set__hovering)) bool  _hovering;

/// @brief Field _lockSizeX, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockSizeX, put=__cordl_internal_set__lockSizeX)) bool  _lockSizeX;

/// @brief Field _lockSizeY, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockSizeY, put=__cordl_internal_set__lockSizeY)) bool  _lockSizeY;

/// @brief Field _lockSizeZ, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockSizeZ, put=__cordl_internal_set__lockSizeZ)) bool  _lockSizeZ;

/// @brief Field _noteBoardNote, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteBoardNote, put=__cordl_internal_set__noteBoardNote)) ::UnityW<::VROSC::NoteBoardNote>  _noteBoardNote;

/// @brief Field _settings, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::VROSC::NotefieldColorSettings>  _settings;

/// @brief Field _transform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Field _transmissionData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__transmissionData, put=__cordl_internal_set__transmissionData)) ::System::Collections::Generic::List_1<::VROSC::TransmissionData>*  _transmissionData;

/// @brief Method Fall, addr 0x17b7b18, size 0x150, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Fall(::UnityEngine::Vector3  vector) ;

/// @brief Method Highlight, addr 0x17b7b04, size 0xc, virtual false, abstract: false, final false
inline void Highlight(::UnityEngine::Vector3  highlightColor) ;

/// @brief Method Hover, addr 0x17b0be0, size 0x18, virtual false, abstract: false, final false
inline void Hover(bool  isHovering, bool  isPlaying) ;

static inline ::VROSC::NoteBoardNoteAnimator* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17b7ce0, size 0x17c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Play, addr 0x17b0ff8, size 0x30, virtual false, abstract: false, final false
inline void Play(::VROSC::PlayData  playData) ;

/// @brief Method SetEffectPowerColor, addr 0x17b5e6c, size 0xc, virtual false, abstract: false, final false
inline void SetEffectPowerColor(::UnityEngine::Vector3  effectPower) ;

/// @brief Method SetTransmissionData, addr 0x17b7b10, size 0x8, virtual false, abstract: false, final false
inline void SetTransmissionData(::System::Collections::Generic::List_1<::VROSC::TransmissionData>*  transmissionData) ;

/// @brief Method Setup, addr 0x17b20d4, size 0xb0, virtual true, abstract: false, final false
inline void Setup(::VROSC::NoteBoardNote*  noteBoardNote, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields, ::UnityEngine::Vector3  baseScale) ;

/// @brief Method Transmit, addr 0x17b7380, size 0x2c, virtual false, abstract: false, final false
inline void Transmit(::UnityEngine::Vector3  transmitPower) ;

/// @brief Method TransmitHovering, addr 0x17b7404, size 0x14, virtual false, abstract: false, final false
inline void TransmitHovering(float_t  hovering) ;

/// @brief Method UpdateInputPower, addr 0x17b79f8, size 0x10c, virtual false, abstract: false, final false
inline void UpdateInputPower() ;

/// @brief Method UpdateScaling, addr 0x17b7c68, size 0x78, virtual true, abstract: false, final false
inline void UpdateScaling() ;

/// @brief Method UpdateVisuals, addr 0x17b7764, size 0x294, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__HightlightColor_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__HightlightColor_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__HoveringAmount_k__BackingField() const;

constexpr float_t& __cordl_internal_get__HoveringAmount_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__InputPower_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__InputPower_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Velocity_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Velocity_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__VisualEffectPower_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__VisualEffectPower_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__baseScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__baseScale() ;

constexpr bool const& __cordl_internal_get__hovering() const;

constexpr bool& __cordl_internal_get__hovering() ;

constexpr bool const& __cordl_internal_get__lockSizeX() const;

constexpr bool& __cordl_internal_get__lockSizeX() ;

constexpr bool const& __cordl_internal_get__lockSizeY() const;

constexpr bool& __cordl_internal_get__lockSizeY() ;

constexpr bool const& __cordl_internal_get__lockSizeZ() const;

constexpr bool& __cordl_internal_get__lockSizeZ() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__noteBoardNote() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__noteBoardNote() ;

constexpr ::UnityW<::VROSC::NotefieldColorSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::VROSC::NotefieldColorSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* const& __cordl_internal_get__transmissionData() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TransmissionData>*& __cordl_internal_get__transmissionData() ;

constexpr void __cordl_internal_set__HightlightColor_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__HoveringAmount_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InputPower_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Velocity_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__VisualEffectPower_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__baseScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__hovering(bool  value) ;

constexpr void __cordl_internal_set__lockSizeX(bool  value) ;

constexpr void __cordl_internal_set__lockSizeY(bool  value) ;

constexpr void __cordl_internal_set__lockSizeZ(bool  value) ;

constexpr void __cordl_internal_set__noteBoardNote(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::VROSC::NotefieldColorSettings>  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__transmissionData(::System::Collections::Generic::List_1<::VROSC::TransmissionData>*  value) ;

/// @brief Method .ctor, addr 0x17b2300, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HightlightColor, addr 0x17b7720, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_HightlightColor() ;

/// @brief Method get_HoveringAmount, addr 0x17b7734, size 0x8, virtual false, abstract: false, final false
inline float_t get_HoveringAmount() ;

/// @brief Method get_InputPower, addr 0x17b7708, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_InputPower() ;

/// @brief Method get_Velocity, addr 0x17b775c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Velocity() ;

/// @brief Method get_VisualEffectPower, addr 0x17b7748, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_VisualEffectPower() ;

/// @brief Method set_HightlightColor, addr 0x17b7714, size 0xc, virtual false, abstract: false, final false
inline void set_HightlightColor(::UnityEngine::Vector3  value) ;

/// @brief Method set_HoveringAmount, addr 0x17b772c, size 0x8, virtual false, abstract: false, final false
inline void set_HoveringAmount(float_t  value) ;

/// @brief Method set_InputPower, addr 0x17b76fc, size 0xc, virtual false, abstract: false, final false
inline void set_InputPower(::UnityEngine::Vector3  value) ;

/// @brief Method set_Velocity, addr 0x17b7754, size 0x8, virtual false, abstract: false, final false
inline void set_Velocity(float_t  value) ;

/// @brief Method set_VisualEffectPower, addr 0x17b773c, size 0xc, virtual false, abstract: false, final false
inline void set_VisualEffectPower(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteAnimator(NoteBoardNoteAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteAnimator(NoteBoardNoteAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1459};

/// @brief Field _lockSizeX, offset: 0x20, size: 0x1, def value: None
 bool  ____lockSizeX;

/// @brief Field _lockSizeY, offset: 0x21, size: 0x1, def value: None
 bool  ____lockSizeY;

/// @brief Field _lockSizeZ, offset: 0x22, size: 0x1, def value: None
 bool  ____lockSizeZ;

/// @brief Field _noteBoardNote, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____noteBoardNote;

/// @brief Field _baseScale, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____baseScale;

/// @brief Field <InputPower>k__BackingField, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____InputPower_k__BackingField;

/// @brief Field <HightlightColor>k__BackingField, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____HightlightColor_k__BackingField;

/// @brief Field <HoveringAmount>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____HoveringAmount_k__BackingField;

/// @brief Field <VisualEffectPower>k__BackingField, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____VisualEffectPower_k__BackingField;

/// @brief Field <Velocity>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____Velocity_k__BackingField;

/// @brief Field _settings, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::NotefieldColorSettings>  ____settings;

/// @brief Field _hovering, offset: 0x70, size: 0x1, def value: None
 bool  ____hovering;

/// @brief Field _transmissionData, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TransmissionData>*  ____transmissionData;

/// @brief Field _transform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____lockSizeX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____lockSizeY) == 0x21, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____lockSizeZ) == 0x22, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____noteBoardNote) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____baseScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____InputPower_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____HightlightColor_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____HoveringAmount_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____VisualEffectPower_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____Velocity_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____settings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____hovering) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____transmissionData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteAnimator, ____transform) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteAnimator, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardNoteAnimator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteAnimator*, "VROSC", "NoteBoardNoteAnimator");
