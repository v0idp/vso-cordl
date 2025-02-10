#pragma once
// IWYU pragma private; include "VROSC/TouchableObjectsController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__Scale_impl.hpp"
#include "VROSC/zzzz__TouchableObjectsController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include "VROSC/zzzz__TouchableObject_def.hpp"
//  Writing Method size for method: ::VROSC::TouchableObjectsController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TouchableObjectsController::*)()>(&::VROSC::TouchableObjectsController::Setup)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x176dfa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TouchableObjectsController.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TouchableObjectsController::*)(bool, bool, ::VROSC::NoteBoard_PlayAxis)>(&::VROSC::TouchableObjectsController::ProcessFrame)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x176e498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "ProcessFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TouchableObjectsController.UpdateAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TouchableObjectsController::*)()>(&::VROSC::TouchableObjectsController::UpdateAll)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x176e7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "UpdateAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TouchableObjectsController.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TouchableObjectsController::*)()>(&::VROSC::TouchableObjectsController::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x176e940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TouchableObjectsController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TouchableObjectsController::*)()>(&::VROSC::TouchableObjectsController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x176e9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>*& VROSC::TouchableObjectsController::__cordl_internal_get__notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>* const& VROSC::TouchableObjectsController::__cordl_internal_get__notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notes;
}
constexpr void VROSC::TouchableObjectsController::__cordl_internal_set__notes(::System::Collections::Generic::List_1<::UnityW<::VROSC::TouchableObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::TouchableObjectsController::__cordl_internal_get__checkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::TouchableObjectsController::__cordl_internal_get__checkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkPosition;
}
constexpr void VROSC::TouchableObjectsController::__cordl_internal_set__checkPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____checkPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::TouchableObjectsController::__cordl_internal_get__height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr int32_t const& VROSC::TouchableObjectsController::__cordl_internal_get__height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr void VROSC::TouchableObjectsController::__cordl_internal_set__height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____height = value;
}
constexpr int32_t& VROSC::TouchableObjectsController::__cordl_internal_get__width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr int32_t const& VROSC::TouchableObjectsController::__cordl_internal_get__width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr void VROSC::TouchableObjectsController::__cordl_internal_set__width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width = value;
}
constexpr int32_t& VROSC::TouchableObjectsController::__cordl_internal_get__depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depth;
}
constexpr int32_t const& VROSC::TouchableObjectsController::__cordl_internal_get__depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depth;
}
constexpr void VROSC::TouchableObjectsController::__cordl_internal_set__depth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depth = value;
}
constexpr float_t& VROSC::TouchableObjectsController::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr float_t const& VROSC::TouchableObjectsController::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void VROSC::TouchableObjectsController::__cordl_internal_set__size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr ::VROSC::Scale& VROSC::TouchableObjectsController::__cordl_internal_get_previewScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewScale;
}
constexpr ::VROSC::Scale const& VROSC::TouchableObjectsController::__cordl_internal_get_previewScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewScale;
}
constexpr void VROSC::TouchableObjectsController::__cordl_internal_set_previewScale(::VROSC::Scale  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previewScale = value;
}
inline void VROSC::TouchableObjectsController::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TouchableObjectsController::ProcessFrame(bool  updatePlaying, bool  playing, ::VROSC::NoteBoard_PlayAxis  playAxis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "ProcessFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteBoard_PlayAxis>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePlaying, playing, playAxis);
}
inline void VROSC::TouchableObjectsController::UpdateAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "UpdateAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TouchableObjectsController::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TouchableObjectsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TouchableObjectsController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TouchableObjectsController* VROSC::TouchableObjectsController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TouchableObjectsController*>());
}
// Ctor Parameters []
constexpr ::VROSC::TouchableObjectsController::TouchableObjectsController()   {
}
