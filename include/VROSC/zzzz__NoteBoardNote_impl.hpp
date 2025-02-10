#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNote.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteAnimator_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteText_def.hpp"
#include "VROSC/zzzz__NoteBoardNote_def.hpp"
#include "VROSC/zzzz__NoteFieldNoteData_def.hpp"
#include "VROSC/zzzz__NoteFieldParameters_def.hpp"
#include "VROSC/zzzz__NoteFieldVisualSelector_def.hpp"
#include "VROSC/zzzz__NoteMeshChangerController_def.hpp"
#include "VROSC/zzzz__PlayData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NoteBoardNote_Coloring::NoteBoardNote_Coloring(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNote_Coloring::NoteBoardNote_Coloring()   {
}
constexpr ::VROSC::NoteBoardNote_Coloring  VROSC::NoteBoardNote_Coloring::AsPlayed{static_cast<int32_t>(0x0)};
constexpr ::VROSC::NoteBoardNote_Coloring  VROSC::NoteBoardNote_Coloring::AlwaysX{static_cast<int32_t>(0x1)};
constexpr ::VROSC::NoteBoardNote_Coloring  VROSC::NoteBoardNote_Coloring::AlwaysY{static_cast<int32_t>(0x2)};
constexpr ::VROSC::NoteBoardNote_Coloring  VROSC::NoteBoardNote_Coloring::AlwaysZ{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::NoteBoardNote.get_TextDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::NoteBoardNoteText> (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::get_TextDisplay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17b07d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_TextDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.get_Animator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::NoteBoardNoteAnimator> (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::get_Animator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17ae4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_Animator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.get_MeshChangerController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::NoteMeshChangerController> (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::get_MeshChangerController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17b07f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_MeshChangerController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.get_TransparentMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::get_TransparentMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b0818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_TransparentMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.set_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*)>(&::VROSC::NoteBoardNote::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b0820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b0828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.set_LocalPositionForAnimation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoardNote::set_LocalPositionForAnimation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17b0830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "set_LocalPositionForAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.get_LocalPositionForAnimation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::get_LocalPositionForAnimation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17b083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_LocalPositionForAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.set_IsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(bool)>(&::VROSC::NoteBoardNote::set_IsPlaying)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17b0848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "set_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.get_IsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::get_IsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b0854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*, ::ArrayW<int32_t,::Array<int32_t>*>, ::UnityEngine::Vector3)>(&::VROSC::NoteBoardNote::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17b085c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(::VROSC::NoteFieldParameters*, ::VROSC::NoteFieldNoteData*, ::UnityEngine::Vector3)>(&::VROSC::NoteBoardNote::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x17b0a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.InitShared
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*, ::UnityEngine::Vector3, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::VROSC::NoteBoardNote::InitShared)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17b0a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "InitShared",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.SetData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*)>(&::VROSC::NoteBoardNote::SetData)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x17b08ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.UpdateVisuals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::UpdateVisuals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17b0b58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.SetHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(bool, bool)>(&::VROSC::NoteBoardNote::SetHovering)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17b0b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.SetLocalPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoardNote::SetLocalPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17b0f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetLocalPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.SetPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)(bool, ::VROSC::PlayData)>(&::VROSC::NoteBoardNote::SetPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17b0f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlayData>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote.FindReferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::FindReferences)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17b1028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "FindReferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNote._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNote::*)()>(&::VROSC::NoteBoardNote::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b107c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteFieldVisualSelector>& VROSC::NoteBoardNote::__cordl_internal_get__noteFieldVisualSwitcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteFieldVisualSwitcher;
}
constexpr ::UnityW<::VROSC::NoteFieldVisualSelector> const& VROSC::NoteBoardNote::__cordl_internal_get__noteFieldVisualSwitcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteFieldVisualSwitcher;
}
constexpr void VROSC::NoteBoardNote::__cordl_internal_set__noteFieldVisualSwitcher(::UnityW<::VROSC::NoteFieldVisualSelector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteFieldVisualSwitcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& VROSC::NoteBoardNote::__cordl_internal_get__transparentMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transparentMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& VROSC::NoteBoardNote::__cordl_internal_get__transparentMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transparentMaterial;
}
constexpr void VROSC::NoteBoardNote::__cordl_internal_set__transparentMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transparentMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteFieldNoteData*& VROSC::NoteBoardNote::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::VROSC::NoteFieldNoteData* const& VROSC::NoteBoardNote::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void VROSC::NoteBoardNote::__cordl_internal_set__Data_k__BackingField(::VROSC::NoteFieldNoteData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Data_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::NoteBoardNote::__cordl_internal_get__LocalPositionForAnimation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalPositionForAnimation_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::NoteBoardNote::__cordl_internal_get__LocalPositionForAnimation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalPositionForAnimation_k__BackingField;
}
constexpr void VROSC::NoteBoardNote::__cordl_internal_set__LocalPositionForAnimation_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalPositionForAnimation_k__BackingField = value;
}
constexpr bool& VROSC::NoteBoardNote::__cordl_internal_get__IsPlaying_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying_k__BackingField;
}
constexpr bool const& VROSC::NoteBoardNote::__cordl_internal_get__IsPlaying_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying_k__BackingField;
}
constexpr void VROSC::NoteBoardNote::__cordl_internal_set__IsPlaying_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPlaying_k__BackingField = value;
}
inline ::UnityW<::VROSC::NoteBoardNoteText> VROSC::NoteBoardNote::get_TextDisplay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_TextDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::NoteBoardNoteText>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::NoteBoardNoteAnimator> VROSC::NoteBoardNote::get_Animator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_Animator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::NoteBoardNoteAnimator>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::NoteMeshChangerController> VROSC::NoteBoardNote::get_MeshChangerController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_MeshChangerController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::NoteMeshChangerController>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> VROSC::NoteBoardNote::get_TransparentMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_TransparentMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNote::set_Data(::VROSC::NoteFieldNoteData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::NoteFieldNoteData* VROSC::NoteBoardNote::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteFieldNoteData*, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNote::set_LocalPositionForAnimation(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "set_LocalPositionForAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::NoteBoardNote::get_LocalPositionForAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_LocalPositionForAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNote::set_IsPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "set_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::NoteBoardNote::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "get_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNote::Init(::VROSC::NoteFieldNoteData*  data, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields, ::UnityEngine::Vector3  noteScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, numberOfFields, noteScale);
}
inline void VROSC::NoteBoardNote::Init(::VROSC::NoteFieldParameters*  parameters, ::VROSC::NoteFieldNoteData*  data, ::UnityEngine::Vector3  noteScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters, data, noteScale);
}
inline void VROSC::NoteBoardNote::InitShared(::VROSC::NoteFieldNoteData*  data, ::UnityEngine::Vector3  noteScale, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "InitShared",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, noteScale, numberOfFields);
}
inline void VROSC::NoteBoardNote::SetData(::VROSC::NoteFieldNoteData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteFieldNoteData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VROSC::NoteBoardNote::UpdateVisuals()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNote::SetHovering(bool  isHovering, bool  isPlaying)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHovering, isPlaying);
}
inline void VROSC::NoteBoardNote::SetLocalPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetLocalPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void VROSC::NoteBoardNote::SetPlaying(bool  isPlaying, ::VROSC::PlayData  playData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "SetPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlayData>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isPlaying, playData);
}
inline void VROSC::NoteBoardNote::FindReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        "FindReferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNote::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoardNote* VROSC::NoteBoardNote::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardNote*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNote::NoteBoardNote()   {
}
