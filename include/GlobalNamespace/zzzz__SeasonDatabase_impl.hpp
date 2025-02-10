#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonDatabase.hpp"
#include "GlobalNamespace/zzzz__SeasonType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SeasonDatabase_def.hpp"
#include "GlobalNamespace/zzzz__SeasonDatabase_def.hpp"
#include "GlobalNamespace/zzzz__SeasonType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SeasonDatabase_Season.IsCurrentSeason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SeasonDatabase_Season::*)(::System::DateTime)>(&::GlobalNamespace::SeasonDatabase_Season::IsCurrentSeason)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x16c3278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase_Season*>::get(),
                        "IsCurrentSeason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonDatabase_Season._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonDatabase_Season::*)()>(&::GlobalNamespace::SeasonDatabase_Season::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c3364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase_Season*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SeasonType& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_seasonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonType;
}
constexpr ::GlobalNamespace::SeasonType const& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_seasonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonType;
}
constexpr void GlobalNamespace::SeasonDatabase_Season::__cordl_internal_set_seasonType(::GlobalNamespace::SeasonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seasonType = value;
}
constexpr int32_t& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_startMonth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startMonth;
}
constexpr int32_t const& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_startMonth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startMonth;
}
constexpr void GlobalNamespace::SeasonDatabase_Season::__cordl_internal_set_startMonth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startMonth = value;
}
constexpr int32_t& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_startDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDay;
}
constexpr int32_t const& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_startDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDay;
}
constexpr void GlobalNamespace::SeasonDatabase_Season::__cordl_internal_set_startDay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startDay = value;
}
constexpr int32_t& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_endMonth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endMonth;
}
constexpr int32_t const& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_endMonth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endMonth;
}
constexpr void GlobalNamespace::SeasonDatabase_Season::__cordl_internal_set_endMonth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endMonth = value;
}
constexpr int32_t& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_endDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endDay;
}
constexpr int32_t const& GlobalNamespace::SeasonDatabase_Season::__cordl_internal_get_endDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endDay;
}
constexpr void GlobalNamespace::SeasonDatabase_Season::__cordl_internal_set_endDay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endDay = value;
}
inline bool GlobalNamespace::SeasonDatabase_Season::IsCurrentSeason(::System::DateTime  currentDate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase_Season*>::get(),
                        "IsCurrentSeason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentDate);
}
inline void GlobalNamespace::SeasonDatabase_Season::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase_Season*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SeasonDatabase_Season* GlobalNamespace::SeasonDatabase_Season::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SeasonDatabase_Season*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeasonDatabase_Season::SeasonDatabase_Season()   {
}
//  Writing Method size for method: ::GlobalNamespace::SeasonDatabase.GetCurrentSeason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SeasonType (::GlobalNamespace::SeasonDatabase::*)()>(&::GlobalNamespace::SeasonDatabase::GetCurrentSeason)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x16c2c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase*>::get(),
                        "GetCurrentSeason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonDatabase._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonDatabase::*)()>(&::GlobalNamespace::SeasonDatabase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c335c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>*& GlobalNamespace::SeasonDatabase::__cordl_internal_get_seasons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasons;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>* const& GlobalNamespace::SeasonDatabase::__cordl_internal_get_seasons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasons;
}
constexpr void GlobalNamespace::SeasonDatabase::__cordl_internal_set_seasons(::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seasons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SeasonType GlobalNamespace::SeasonDatabase::GetCurrentSeason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase*>::get(),
                        "GetCurrentSeason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SeasonType, false>(this, ___internal_method);
}
inline void GlobalNamespace::SeasonDatabase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonDatabase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SeasonDatabase* GlobalNamespace::SeasonDatabase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SeasonDatabase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeasonDatabase::SeasonDatabase()   {
}
