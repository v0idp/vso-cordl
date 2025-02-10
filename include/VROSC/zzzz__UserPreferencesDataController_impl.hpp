#pragma once
// IWYU pragma private; include "VROSC/UserPreferencesDataController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__BaseDataController_impl.hpp"
#include "VROSC/zzzz__UserPreferencesDataController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__Metronome_def.hpp"
#include "VROSC/zzzz__SettingsDataDefaults_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
#include "VROSC/zzzz__UserPreferencesDataController_def.hpp"
#include "VROSC/zzzz__UserPreferencesDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::UserPreferencesDataController___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController___c__DisplayClass8_0::*)()>(&::VROSC::UserPreferencesDataController___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1879c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController___c__DisplayClass8_0._LoadLocalData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController___c__DisplayClass8_0::*)(::StringW)>(&::VROSC::UserPreferencesDataController___c__DisplayClass8_0::_LoadLocalData_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x187b134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass8_0*>::get(),
                        "<LoadLocalData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserPreferencesDataController*& VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserPreferencesDataController* const& VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_set___4__this(::VROSC::UserPreferencesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::UserPreferencesDataController___c__DisplayClass8_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserPreferencesDataController___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController___c__DisplayClass8_0::_LoadLocalData_b__0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass8_0*>::get(),
                        "<LoadLocalData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::VROSC::UserPreferencesDataController___c__DisplayClass8_0* VROSC::UserPreferencesDataController___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserPreferencesDataController___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserPreferencesDataController___c__DisplayClass8_0::UserPreferencesDataController___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::VROSC::UserPreferencesDataController___c__DisplayClass93_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController___c__DisplayClass93_0::*)()>(&::VROSC::UserPreferencesDataController___c__DisplayClass93_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187a1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass93_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController___c__DisplayClass93_0._LoadCloudData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController___c__DisplayClass93_0::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::VROSC::UserPreferencesDataController___c__DisplayClass93_0::_LoadCloudData_b__0)> {
  constexpr static std::size_t size = 0xed0;
  constexpr static std::size_t addrs = 0x187b248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass93_0*>::get(),
                        "<LoadCloudData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserPreferencesDataController*& VROSC::UserPreferencesDataController___c__DisplayClass93_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserPreferencesDataController* const& VROSC::UserPreferencesDataController___c__DisplayClass93_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserPreferencesDataController___c__DisplayClass93_0::__cordl_internal_set___4__this(::VROSC::UserPreferencesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UserPreferencesDataController___c__DisplayClass93_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::UserPreferencesDataController___c__DisplayClass93_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserPreferencesDataController___c__DisplayClass93_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserPreferencesDataController___c__DisplayClass93_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass93_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController___c__DisplayClass93_0::_LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass93_0*>::get(),
                        "<LoadCloudData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::VROSC::UserPreferencesDataController___c__DisplayClass93_0* VROSC::UserPreferencesDataController___c__DisplayClass93_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserPreferencesDataController___c__DisplayClass93_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserPreferencesDataController___c__DisplayClass93_0::UserPreferencesDataController___c__DisplayClass93_0()   {
}
//  Writing Method size for method: ::VROSC::UserPreferencesDataController___c__DisplayClass95_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController___c__DisplayClass95_0::*)()>(&::VROSC::UserPreferencesDataController___c__DisplayClass95_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187a390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass95_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController___c__DisplayClass95_0._SaveAllPreferences_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController___c__DisplayClass95_0::*)()>(&::VROSC::UserPreferencesDataController___c__DisplayClass95_0::_SaveAllPreferences_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x187c118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass95_0*>::get(),
                        "<SaveAllPreferences>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserPreferencesDataController*& VROSC::UserPreferencesDataController___c__DisplayClass95_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserPreferencesDataController* const& VROSC::UserPreferencesDataController___c__DisplayClass95_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserPreferencesDataController___c__DisplayClass95_0::__cordl_internal_set___4__this(::VROSC::UserPreferencesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UserPreferencesDataController___c__DisplayClass95_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::UserPreferencesDataController___c__DisplayClass95_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserPreferencesDataController___c__DisplayClass95_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserPreferencesDataController___c__DisplayClass95_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass95_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController___c__DisplayClass95_0::_SaveAllPreferences_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController___c__DisplayClass95_0*>::get(),
                        "<SaveAllPreferences>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UserPreferencesDataController___c__DisplayClass95_0* VROSC::UserPreferencesDataController___c__DisplayClass95_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserPreferencesDataController___c__DisplayClass95_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserPreferencesDataController___c__DisplayClass95_0::UserPreferencesDataController___c__DisplayClass95_0()   {
}
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_DataModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UserPreferencesDataModel* (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_DataModel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1879274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_MoveableCameraTransformData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformDataController* (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_MoveableCameraTransformData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18792ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MoveableCameraTransformData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18792f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.ApplyDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::VROSC::SettingsDataDefaults*)>(&::VROSC::UserPreferencesDataController::ApplyDefaults)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x18794b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "ApplyDefaults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SettingsDataDefaults*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.LoadLocalData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::LoadLocalData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1879b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_SelectedSpectatorCamera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_SelectedSpectatorCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SelectedSpectatorCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_SelectedSpectatorCamera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(int32_t)>(&::VROSC::UserPreferencesDataController::set_SelectedSpectatorCamera)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18796a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SelectedSpectatorCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_SpectatorHideBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_SpectatorHideBackground)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SpectatorHideBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_SpectatorHideBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_SpectatorHideBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18796d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SpectatorHideBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_MalletAngle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_MalletAngle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MalletAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_MalletAngle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(float_t)>(&::VROSC::UserPreferencesDataController::set_MalletAngle)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x187970c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MalletAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_MalletLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_MalletLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MalletLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_MalletLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(float_t)>(&::VROSC::UserPreferencesDataController::set_MalletLength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1879740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MalletLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_LaserAutoDimWhenHoldingMallets
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_LaserAutoDimWhenHoldingMallets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_LaserAutoDimWhenHoldingMallets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_LaserAutoDimWhenHoldingMallets
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_LaserAutoDimWhenHoldingMallets)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_LaserAutoDimWhenHoldingMallets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_DisableHaptics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_DisableHaptics)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_DisableHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_DisableHaptics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_DisableHaptics)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_DisableHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_GlobalVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_GlobalVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_GlobalVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_GlobalVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(float_t)>(&::VROSC::UserPreferencesDataController::set_GlobalVolume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18797ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_GlobalVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_PlayAudioWhenUnfocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_PlayAudioWhenUnfocused)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PlayAudioWhenUnfocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_PlayAudioWhenUnfocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_PlayAudioWhenUnfocused)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18797e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PlayAudioWhenUnfocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_UseClassicControls
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_UseClassicControls)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_UseClassicControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_UseClassicControls
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_UseClassicControls)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_UseClassicControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_VideoPlayerVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_VideoPlayerVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_VideoPlayerVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_VideoPlayerVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(float_t)>(&::VROSC::UserPreferencesDataController::set_VideoPlayerVolume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1879850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_VideoPlayerVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_AutoPlayPreviews
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_AutoPlayPreviews)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_AutoPlayPreviews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_AutoPlayPreviews
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_AutoPlayPreviews)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_AutoPlayPreviews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_PreviewsVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_PreviewsVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_PreviewsVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(float_t)>(&::VROSC::UserPreferencesDataController::set_PreviewsVolume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18798bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_PreviewDrums
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_PreviewDrums)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_PreviewDrums
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_PreviewDrums)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18798f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_PreviewDrumsVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_PreviewDrumsVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewDrumsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_PreviewDrumsVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(float_t)>(&::VROSC::UserPreferencesDataController::set_PreviewDrumsVolume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1879928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewDrumsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_AllowExternalKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_AllowExternalKeyboard)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_AllowExternalKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_AllowExternalKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_AllowExternalKeyboard)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x187995c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_AllowExternalKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_UseTouchForKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_UseTouchForKeyboard)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_UseTouchForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_UseTouchForKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_UseTouchForKeyboard)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_UseTouchForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_UsePointAndClickForKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_UsePointAndClickForKeyboard)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_UsePointAndClickForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_UsePointAndClickForKeyboard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_UsePointAndClickForKeyboard)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18799cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_UsePointAndClickForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_KeyboardPlaysClickSound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_KeyboardPlaysClickSound)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_KeyboardPlaysClickSound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_KeyboardPlaysClickSound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_KeyboardPlaysClickSound)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_KeyboardPlaysClickSound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_Overdub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_Overdub)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_Overdub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_Overdub)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_SetRecordingLengthToFirstLoopLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_SetRecordingLengthToFirstLoopLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SetRecordingLengthToFirstLoopLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_SetRecordingLengthToFirstLoopLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_SetRecordingLengthToFirstLoopLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SetRecordingLengthToFirstLoopLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_MetronomeMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Metronome_Mode (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_MetronomeMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_MetronomeMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::VROSC::Metronome_Mode)>(&::VROSC::UserPreferencesDataController::set_MetronomeMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1879b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Mode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_MetronomeMedium
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Metronome_Medium (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_MetronomeMedium)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_MetronomeMedium
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::VROSC::Metronome_Medium)>(&::VROSC::UserPreferencesDataController::set_MetronomeMedium)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1879b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Medium>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_GrabToActivateMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_GrabToActivateMicrophone)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_GrabToActivateMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_GrabToActivateMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_GrabToActivateMicrophone)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_GrabToActivateMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_PreviewMicrophoneReverb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_PreviewMicrophoneReverb)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewMicrophoneReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_PreviewMicrophoneReverb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_PreviewMicrophoneReverb)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewMicrophoneReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_SelectedEnvironment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_SelectedEnvironment)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SelectedEnvironment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_SelectedEnvironment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::StringW)>(&::VROSC::UserPreferencesDataController::set_SelectedEnvironment)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1879a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SelectedEnvironment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_OverrideEnvironmentSettingsOnLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_OverrideEnvironmentSettingsOnLoad)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1879ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_OverrideEnvironmentSettingsOnLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_OverrideEnvironmentSettingsOnLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(bool)>(&::VROSC::UserPreferencesDataController::set_OverrideEnvironmentSettingsOnLoad)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1879a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_OverrideEnvironmentSettingsOnLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_TemplateSessionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_TemplateSessionId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x187a014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_TemplateSessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_TemplateSessionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::StringW)>(&::VROSC::UserPreferencesDataController::set_TemplateSessionId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x187a030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_TemplateSessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.get_LinkLatency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UserPreferencesDataController::*)()>(&::VROSC::UserPreferencesDataController::get_LinkLatency)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x187a064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_LinkLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.set_LinkLatency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(float_t)>(&::VROSC::UserPreferencesDataController::set_LinkLatency)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x187a080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_LinkLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.LoadCloudData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::LoadCloudData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x187a0b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SaveCloudData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SaveCloudData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x187a1d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SaveAllPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SaveAllPreferences)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x187a1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveAllPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SaveGeneralPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SaveGeneralPreferences)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x187a398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveGeneralPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SavePreviewsPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SavePreviewsPreferences)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x187a6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SavePreviewsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SaveMalletsPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SaveMalletsPreferences)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x187a934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveMalletsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SaveSocialPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SaveSocialPreferences)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x187ab40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveSocialPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SaveKeyboardPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SaveKeyboardPreferences)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x187ad4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveKeyboardPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataController.SaveLoopStationPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserPreferencesDataController::SaveLoopStationPreferences)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x187af8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveLoopStationPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SettingsDataDefaults>& VROSC::UserPreferencesDataController::__cordl_internal_get__settingsDefaults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsDefaults;
}
constexpr ::UnityW<::VROSC::SettingsDataDefaults> const& VROSC::UserPreferencesDataController::__cordl_internal_get__settingsDefaults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsDefaults;
}
constexpr void VROSC::UserPreferencesDataController::__cordl_internal_set__settingsDefaults(::UnityW<::VROSC::SettingsDataDefaults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsDefaults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TransformDataController*& VROSC::UserPreferencesDataController::__cordl_internal_get__moveableCameraTransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveableCameraTransformData;
}
constexpr ::VROSC::TransformDataController* const& VROSC::UserPreferencesDataController::__cordl_internal_get__moveableCameraTransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveableCameraTransformData;
}
constexpr void VROSC::UserPreferencesDataController::__cordl_internal_set__moveableCameraTransformData(::VROSC::TransformDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____moveableCameraTransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::UserPreferencesDataModel* VROSC::UserPreferencesDataController::get_DataModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UserPreferencesDataModel*, false>(this, ___internal_method);
}
inline ::VROSC::TransformDataController* VROSC::UserPreferencesDataController::get_MoveableCameraTransformData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MoveableCameraTransformData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TransformDataController*, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::ApplyDefaults(::VROSC::SettingsDataDefaults*  settingsDefaults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "ApplyDefaults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SettingsDataDefaults*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsDefaults);
}
inline void VROSC::UserPreferencesDataController::LoadLocalData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline int32_t VROSC::UserPreferencesDataController::get_SelectedSpectatorCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SelectedSpectatorCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_SelectedSpectatorCamera(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SelectedSpectatorCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_SpectatorHideBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SpectatorHideBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_SpectatorHideBackground(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SpectatorHideBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::UserPreferencesDataController::get_MalletAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MalletAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_MalletAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MalletAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::UserPreferencesDataController::get_MalletLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MalletLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_MalletLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MalletLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_LaserAutoDimWhenHoldingMallets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_LaserAutoDimWhenHoldingMallets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_LaserAutoDimWhenHoldingMallets(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_LaserAutoDimWhenHoldingMallets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_DisableHaptics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_DisableHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_DisableHaptics(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_DisableHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::UserPreferencesDataController::get_GlobalVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_GlobalVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_GlobalVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_GlobalVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_PlayAudioWhenUnfocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PlayAudioWhenUnfocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_PlayAudioWhenUnfocused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PlayAudioWhenUnfocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_UseClassicControls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_UseClassicControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_UseClassicControls(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_UseClassicControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::UserPreferencesDataController::get_VideoPlayerVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_VideoPlayerVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_VideoPlayerVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_VideoPlayerVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_AutoPlayPreviews()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_AutoPlayPreviews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_AutoPlayPreviews(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_AutoPlayPreviews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::UserPreferencesDataController::get_PreviewsVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_PreviewsVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_PreviewDrums()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_PreviewDrums(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::UserPreferencesDataController::get_PreviewDrumsVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewDrumsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_PreviewDrumsVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewDrumsVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_AllowExternalKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_AllowExternalKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_AllowExternalKeyboard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_AllowExternalKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_UseTouchForKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_UseTouchForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_UseTouchForKeyboard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_UseTouchForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_UsePointAndClickForKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_UsePointAndClickForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_UsePointAndClickForKeyboard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_UsePointAndClickForKeyboard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_KeyboardPlaysClickSound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_KeyboardPlaysClickSound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_KeyboardPlaysClickSound(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_KeyboardPlaysClickSound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_Overdub()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_Overdub(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_SetRecordingLengthToFirstLoopLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SetRecordingLengthToFirstLoopLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_SetRecordingLengthToFirstLoopLength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SetRecordingLengthToFirstLoopLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::Metronome_Mode VROSC::UserPreferencesDataController::get_MetronomeMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Metronome_Mode, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_MetronomeMode(::VROSC::Metronome_Mode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MetronomeMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Mode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::Metronome_Medium VROSC::UserPreferencesDataController::get_MetronomeMedium()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_MetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Metronome_Medium, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_MetronomeMedium(::VROSC::Metronome_Medium  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_MetronomeMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Medium>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_GrabToActivateMicrophone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_GrabToActivateMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_GrabToActivateMicrophone(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_GrabToActivateMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_PreviewMicrophoneReverb()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_PreviewMicrophoneReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_PreviewMicrophoneReverb(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_PreviewMicrophoneReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::UserPreferencesDataController::get_SelectedEnvironment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_SelectedEnvironment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_SelectedEnvironment(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_SelectedEnvironment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::UserPreferencesDataController::get_OverrideEnvironmentSettingsOnLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_OverrideEnvironmentSettingsOnLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_OverrideEnvironmentSettingsOnLoad(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_OverrideEnvironmentSettingsOnLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::UserPreferencesDataController::get_TemplateSessionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_TemplateSessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_TemplateSessionId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_TemplateSessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::UserPreferencesDataController::get_LinkLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "get_LinkLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataController::set_LinkLatency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "set_LinkLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::UserPreferencesDataController::LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SaveAllPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveAllPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SaveGeneralPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveGeneralPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SavePreviewsPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SavePreviewsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SaveMalletsPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveMalletsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SaveSocialPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveSocialPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SaveKeyboardPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveKeyboardPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserPreferencesDataController::SaveLoopStationPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataController*>::get(),
                        "SaveLoopStationPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline ::VROSC::UserPreferencesDataController* VROSC::UserPreferencesDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserPreferencesDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserPreferencesDataController::UserPreferencesDataController()   {
}
