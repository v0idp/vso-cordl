#pragma once
// IWYU pragma private; include "VROSC/UserFavoritesDataController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__BaseDataController_impl.hpp"
#include "VROSC/zzzz__UserFavoritesDataController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__SessionUIData_def.hpp"
#include "VROSC/zzzz__Session_def.hpp"
#include "VROSC/zzzz__UserFavoritesDataController_def.hpp"
#include "VROSC/zzzz__UserFavoritesDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c::*)()>(&::VROSC::UserFavoritesDataController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1877cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c._LoadCloudData_b__9_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserFavoritesDataController___c::*)(::System::Object*)>(&::VROSC::UserFavoritesDataController___c::_LoadCloudData_b__9_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1877cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get(),
                        "<LoadCloudData>b__9_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::UserFavoritesDataController___c::setStaticF___9(::VROSC::UserFavoritesDataController___c*  value)  {
::cordl_internals::setStaticField<::VROSC::UserFavoritesDataController___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get>(std::forward<::VROSC::UserFavoritesDataController___c*>(value));
}
inline ::VROSC::UserFavoritesDataController___c* VROSC::UserFavoritesDataController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::UserFavoritesDataController___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get>();
}
inline void VROSC::UserFavoritesDataController___c::setStaticF___9__9_2(::System::Func_2<::System::Object*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__9_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get>(std::forward<::System::Func_2<::System::Object*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Object*,::StringW>* VROSC::UserFavoritesDataController___c::getStaticF___9__9_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,::StringW>*, "<>9__9_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get>();
}
inline void VROSC::UserFavoritesDataController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW VROSC::UserFavoritesDataController___c::_LoadCloudData_b__9_2(::System::Object*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c*>::get(),
                        "<LoadCloudData>b__9_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::VROSC::UserFavoritesDataController___c* VROSC::UserFavoritesDataController___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserFavoritesDataController___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserFavoritesDataController___c::UserFavoritesDataController___c()   {
}
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c__DisplayClass12_0::*)()>(&::VROSC::UserFavoritesDataController___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1877c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass12_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c__DisplayClass12_0._AddFavoriteToData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c__DisplayClass12_0::*)(::StringW)>(&::VROSC::UserFavoritesDataController___c__DisplayClass12_0::_AddFavoriteToData_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1877ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass12_0*>::get(),
                        "<AddFavoriteToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserFavoritesDataModel_Favorite*& VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_get_favorite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favorite;
}
constexpr ::VROSC::UserFavoritesDataModel_Favorite* const& VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_get_favorite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favorite;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_set_favorite(::VROSC::UserFavoritesDataModel_Favorite*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___favorite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UserFavoritesDataController*& VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserFavoritesDataController* const& VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_set___4__this(::VROSC::UserFavoritesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass12_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserFavoritesDataController___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass12_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserFavoritesDataController___c__DisplayClass12_0::_AddFavoriteToData_b__0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass12_0*>::get(),
                        "<AddFavoriteToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::VROSC::UserFavoritesDataController___c__DisplayClass12_0* VROSC::UserFavoritesDataController___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserFavoritesDataController___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserFavoritesDataController___c__DisplayClass12_0::UserFavoritesDataController___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c__DisplayClass13_0::*)()>(&::VROSC::UserFavoritesDataController___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1877c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c__DisplayClass13_0._RemoveFavoriteFromData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c__DisplayClass13_0::*)()>(&::VROSC::UserFavoritesDataController___c__DisplayClass13_0::_RemoveFavoriteFromData_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1877dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass13_0*>::get(),
                        "<RemoveFavoriteFromData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserFavoritesDataController*& VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserFavoritesDataController* const& VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_set___4__this(::VROSC::UserFavoritesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UserFavoritesDataModel_Favorite*& VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_get_favorite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favorite;
}
constexpr ::VROSC::UserFavoritesDataModel_Favorite* const& VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_get_favorite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favorite;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_set_favorite(::VROSC::UserFavoritesDataModel_Favorite*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___favorite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass13_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserFavoritesDataController___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserFavoritesDataController___c__DisplayClass13_0::_RemoveFavoriteFromData_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass13_0*>::get(),
                        "<RemoveFavoriteFromData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UserFavoritesDataController___c__DisplayClass13_0* VROSC::UserFavoritesDataController___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserFavoritesDataController___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserFavoritesDataController___c__DisplayClass13_0::UserFavoritesDataController___c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c__DisplayClass9_0::*)()>(&::VROSC::UserFavoritesDataController___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18779ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass9_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c__DisplayClass9_0._LoadCloudData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c__DisplayClass9_0::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::VROSC::UserFavoritesDataController___c__DisplayClass9_0::_LoadCloudData_b__0)> {
  constexpr static std::size_t size = 0x13a8;
  constexpr static std::size_t addrs = 0x1877e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass9_0*>::get(),
                        "<LoadCloudData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController___c__DisplayClass9_0._LoadCloudData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController___c__DisplayClass9_0::*)(::VROSC::Error)>(&::VROSC::UserFavoritesDataController___c__DisplayClass9_0::_LoadCloudData_b__1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18791f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass9_0*>::get(),
                        "<LoadCloudData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserFavoritesDataController*& VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserFavoritesDataController* const& VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_set___4__this(::VROSC::UserFavoritesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::UserFavoritesDataController___c__DisplayClass9_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserFavoritesDataController___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass9_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserFavoritesDataController___c__DisplayClass9_0::_LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass9_0*>::get(),
                        "<LoadCloudData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VROSC::UserFavoritesDataController___c__DisplayClass9_0::_LoadCloudData_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController___c__DisplayClass9_0*>::get(),
                        "<LoadCloudData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::UserFavoritesDataController___c__DisplayClass9_0* VROSC::UserFavoritesDataController___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserFavoritesDataController___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserFavoritesDataController___c__DisplayClass9_0::UserFavoritesDataController___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.get_DataModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UserFavoritesDataModel* (::VROSC::UserFavoritesDataController::*)()>(&::VROSC::UserFavoritesDataController::get_DataModel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1876d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)()>(&::VROSC::UserFavoritesDataController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1876df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.AddFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)(::StringW, ::StringW, ::VROSC::Session*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserFavoritesDataController::AddFavorite)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1876ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "AddFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Session*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.RemoveFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserFavoritesDataController::RemoveFavorite)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x18772e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "RemoveFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.RemoveLocalFavoriteWithId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)(::StringW)>(&::VROSC::UserFavoritesDataController::RemoveLocalFavoriteWithId)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1877688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "RemoveLocalFavoriteWithId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.GetFavoriteIdFromSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserFavoritesDataController::*)(::StringW)>(&::VROSC::UserFavoritesDataController::GetFavoriteIdFromSession)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1877798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "GetFavoriteIdFromSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.HasFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserFavoritesDataController::*)(::StringW)>(&::VROSC::UserFavoritesDataController::HasFavorite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1877068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "HasFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.LoadCloudData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserFavoritesDataController::LoadCloudData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1877800;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.SaveCloudData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserFavoritesDataController::SaveCloudData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18779f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.GetFavoritesSessionUIData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* (::VROSC::UserFavoritesDataController::*)()>(&::VROSC::UserFavoritesDataController::GetFavoritesSessionUIData)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x18779f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "GetFavoritesSessionUIData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.AddFavoriteToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)(::VROSC::UserFavoritesDataModel_Favorite*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserFavoritesDataController::AddFavoriteToData)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x18770d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "AddFavoriteToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserFavoritesDataModel_Favorite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.RemoveFavoriteFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserFavoritesDataController::*)(::VROSC::UserFavoritesDataModel_Favorite*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserFavoritesDataController::RemoveFavoriteFromData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1877550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "RemoveFavoriteFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserFavoritesDataModel_Favorite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserFavoritesDataController.GetFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UserFavoritesDataModel_Favorite* (::VROSC::UserFavoritesDataController::*)(::StringW)>(&::VROSC::UserFavoritesDataController::GetFavorite)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x18773dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "GetFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::UserFavoritesDataController::__cordl_internal_get__isWaitingForData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWaitingForData;
}
constexpr bool const& VROSC::UserFavoritesDataController::__cordl_internal_get__isWaitingForData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWaitingForData;
}
constexpr void VROSC::UserFavoritesDataController::__cordl_internal_set__isWaitingForData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isWaitingForData = value;
}
inline ::VROSC::UserFavoritesDataModel* VROSC::UserFavoritesDataController::get_DataModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UserFavoritesDataModel*, false>(this, ___internal_method);
}
inline void VROSC::UserFavoritesDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserFavoritesDataController::AddFavorite(::StringW  sessionId, ::StringW  sessionFavoriteId, ::VROSC::Session*  session, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "AddFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Session*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, sessionFavoriteId, session, onSuccess, onFailure);
}
inline void VROSC::UserFavoritesDataController::RemoveFavorite(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "RemoveFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline void VROSC::UserFavoritesDataController::RemoveLocalFavoriteWithId(::StringW  favoriteId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "RemoveLocalFavoriteWithId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, favoriteId);
}
inline ::StringW VROSC::UserFavoritesDataController::GetFavoriteIdFromSession(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "GetFavoriteIdFromSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, sessionId);
}
inline bool VROSC::UserFavoritesDataController::HasFavorite(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "HasFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sessionId);
}
inline void VROSC::UserFavoritesDataController::LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserFavoritesDataController::SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* VROSC::UserFavoritesDataController::GetFavoritesSessionUIData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "GetFavoritesSessionUIData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*, false>(this, ___internal_method);
}
inline void VROSC::UserFavoritesDataController::AddFavoriteToData(::VROSC::UserFavoritesDataModel_Favorite*  favorite, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "AddFavoriteToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserFavoritesDataModel_Favorite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, favorite, onSuccess, onFailure);
}
inline void VROSC::UserFavoritesDataController::RemoveFavoriteFromData(::VROSC::UserFavoritesDataModel_Favorite*  favorite, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "RemoveFavoriteFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserFavoritesDataModel_Favorite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, favorite, onSuccess, onFailure);
}
inline ::VROSC::UserFavoritesDataModel_Favorite* VROSC::UserFavoritesDataController::GetFavorite(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserFavoritesDataController*>::get(),
                        "GetFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UserFavoritesDataModel_Favorite*, false>(this, ___internal_method, sessionId);
}
inline ::VROSC::UserFavoritesDataController* VROSC::UserFavoritesDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserFavoritesDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserFavoritesDataController::UserFavoritesDataController()   {
}
