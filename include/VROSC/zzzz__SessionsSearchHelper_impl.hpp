#pragma once
// IWYU pragma private; include "VROSC/SessionsSearchHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__SessionsSearchHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__SessionsSearchHelper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SessionsSearchHelper_OrderingType::SessionsSearchHelper_OrderingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper_OrderingType::SessionsSearchHelper_OrderingType()   {
}
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::Newest{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::Oldest{static_cast<int32_t>(0x1)};
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::AZ{static_cast<int32_t>(0x2)};
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::ZA{static_cast<int32_t>(0x3)};
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::MostPopular{static_cast<int32_t>(0x4)};
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::LeastPopular{static_cast<int32_t>(0x5)};
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::MostCheers{static_cast<int32_t>(0x6)};
constexpr ::VROSC::SessionsSearchHelper_OrderingType  VROSC::SessionsSearchHelper_OrderingType::LeastCheers{static_cast<int32_t>(0x7)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SessionsSearchHelper_OrderingField::SessionsSearchHelper_OrderingField(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper_OrderingField::SessionsSearchHelper_OrderingField()   {
}
constexpr ::VROSC::SessionsSearchHelper_OrderingField  VROSC::SessionsSearchHelper_OrderingField::Date{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SessionsSearchHelper_OrderingField  VROSC::SessionsSearchHelper_OrderingField::Alphabetical{static_cast<int32_t>(0x1)};
constexpr ::VROSC::SessionsSearchHelper_OrderingField  VROSC::SessionsSearchHelper_OrderingField::Popularity{static_cast<int32_t>(0x2)};
constexpr ::VROSC::SessionsSearchHelper_OrderingField  VROSC::SessionsSearchHelper_OrderingField::Cheers{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SessionsSearchHelper_OrderingDirection::SessionsSearchHelper_OrderingDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper_OrderingDirection::SessionsSearchHelper_OrderingDirection()   {
}
constexpr ::VROSC::SessionsSearchHelper_OrderingDirection  VROSC::SessionsSearchHelper_OrderingDirection::Descending{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SessionsSearchHelper_OrderingDirection  VROSC::SessionsSearchHelper_OrderingDirection::Ascending{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SessionsSearchHelper_FilteringType::SessionsSearchHelper_FilteringType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper_FilteringType::SessionsSearchHelper_FilteringType()   {
}
constexpr ::VROSC::SessionsSearchHelper_FilteringType  VROSC::SessionsSearchHelper_FilteringType::Search{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SessionsSearchHelper_FilteringType  VROSC::SessionsSearchHelper_FilteringType::LastWeek{static_cast<int32_t>(0x1)};
constexpr ::VROSC::SessionsSearchHelper_FilteringType  VROSC::SessionsSearchHelper_FilteringType::LastMonth{static_cast<int32_t>(0x2)};
constexpr ::VROSC::SessionsSearchHelper_FilteringType  VROSC::SessionsSearchHelper_FilteringType::LastYear{static_cast<int32_t>(0x3)};
constexpr ::VROSC::SessionsSearchHelper_FilteringType  VROSC::SessionsSearchHelper_FilteringType::SinceBeginning{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SessionsSearchHelper_FilteringField::SessionsSearchHelper_FilteringField(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper_FilteringField::SessionsSearchHelper_FilteringField()   {
}
constexpr ::VROSC::SessionsSearchHelper_FilteringField  VROSC::SessionsSearchHelper_FilteringField::Date{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SessionsSearchHelper_FilteringField  VROSC::SessionsSearchHelper_FilteringField::Text{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::SessionsSearchHelper_Ordering._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsSearchHelper_Ordering::*)()>(&::VROSC::SessionsSearchHelper_Ordering::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1764a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper_Ordering*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SessionsSearchHelper_Ordering::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& VROSC::SessionsSearchHelper_Ordering::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void VROSC::SessionsSearchHelper_Ordering::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionsSearchHelper_OrderingField& VROSC::SessionsSearchHelper_Ordering::__cordl_internal_get_Field()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Field;
}
constexpr ::VROSC::SessionsSearchHelper_OrderingField const& VROSC::SessionsSearchHelper_Ordering::__cordl_internal_get_Field() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Field;
}
constexpr void VROSC::SessionsSearchHelper_Ordering::__cordl_internal_set_Field(::VROSC::SessionsSearchHelper_OrderingField  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Field = value;
}
constexpr ::VROSC::SessionsSearchHelper_OrderingDirection& VROSC::SessionsSearchHelper_Ordering::__cordl_internal_get_Direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Direction;
}
constexpr ::VROSC::SessionsSearchHelper_OrderingDirection const& VROSC::SessionsSearchHelper_Ordering::__cordl_internal_get_Direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Direction;
}
constexpr void VROSC::SessionsSearchHelper_Ordering::__cordl_internal_set_Direction(::VROSC::SessionsSearchHelper_OrderingDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Direction = value;
}
inline void VROSC::SessionsSearchHelper_Ordering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper_Ordering*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionsSearchHelper_Ordering* VROSC::SessionsSearchHelper_Ordering::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionsSearchHelper_Ordering*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper_Ordering::SessionsSearchHelper_Ordering()   {
}
//  Writing Method size for method: ::VROSC::SessionsSearchHelper_Filtering._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsSearchHelper_Filtering::*)()>(&::VROSC::SessionsSearchHelper_Filtering::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1764a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper_Filtering*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SessionsSearchHelper_Filtering::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& VROSC::SessionsSearchHelper_Filtering::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void VROSC::SessionsSearchHelper_Filtering::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionsSearchHelper_FilteringField& VROSC::SessionsSearchHelper_Filtering::__cordl_internal_get_Field()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Field;
}
constexpr ::VROSC::SessionsSearchHelper_FilteringField const& VROSC::SessionsSearchHelper_Filtering::__cordl_internal_get_Field() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Field;
}
constexpr void VROSC::SessionsSearchHelper_Filtering::__cordl_internal_set_Field(::VROSC::SessionsSearchHelper_FilteringField  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Field = value;
}
constexpr ::System::Object*& VROSC::SessionsSearchHelper_Filtering::__cordl_internal_get_Filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filter;
}
constexpr ::System::Object* const& VROSC::SessionsSearchHelper_Filtering::__cordl_internal_get_Filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filter;
}
constexpr void VROSC::SessionsSearchHelper_Filtering::__cordl_internal_set_Filter(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SessionsSearchHelper_Filtering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper_Filtering*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionsSearchHelper_Filtering* VROSC::SessionsSearchHelper_Filtering::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionsSearchHelper_Filtering*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper_Filtering::SessionsSearchHelper_Filtering()   {
}
//  Writing Method size for method: ::VROSC::SessionsSearchHelper.GetOrderingTypeByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SessionsSearchHelper_OrderingType (*)(::StringW)>(&::VROSC::SessionsSearchHelper::GetOrderingTypeByName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1764094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get(),
                        "GetOrderingTypeByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsSearchHelper.GetFilteringTypeByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SessionsSearchHelper_FilteringType (*)(::StringW)>(&::VROSC::SessionsSearchHelper::GetFilteringTypeByName)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1764308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get(),
                        "GetFilteringTypeByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SessionsSearchHelper::setStaticF_OrderingValues(::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>*, "OrderingValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>* VROSC::SessionsSearchHelper::getStaticF_OrderingValues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>*, "OrderingValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get>();
}
inline void VROSC::SessionsSearchHelper::setStaticF_FilteringValues(::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>*, "FilteringValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>* VROSC::SessionsSearchHelper::getStaticF_FilteringValues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>*, "FilteringValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get>();
}
inline ::VROSC::SessionsSearchHelper_OrderingType VROSC::SessionsSearchHelper::GetOrderingTypeByName(::StringW  orderingName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get(),
                        "GetOrderingTypeByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::SessionsSearchHelper_OrderingType, false>(nullptr, ___internal_method, orderingName);
}
inline ::VROSC::SessionsSearchHelper_FilteringType VROSC::SessionsSearchHelper::GetFilteringTypeByName(::StringW  filteringName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsSearchHelper*>::get(),
                        "GetFilteringTypeByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::SessionsSearchHelper_FilteringType, false>(nullptr, ___internal_method, filteringName);
}
// Ctor Parameters []
constexpr ::VROSC::SessionsSearchHelper::SessionsSearchHelper()   {
}
