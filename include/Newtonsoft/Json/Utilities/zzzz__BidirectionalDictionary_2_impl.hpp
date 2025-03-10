#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/BidirectionalDictionary_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__BidirectionalDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template<typename TFirst,typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TFirst,TSecond>*& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__firstToSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstToSecond;
}
template<typename TFirst,typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TFirst,TSecond>* const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__firstToSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstToSecond;
}
template<typename TFirst,typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_set__firstToSecond(::System::Collections::Generic::IDictionary_2<TFirst,TSecond>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____firstToSecond, value);
}
template<typename TFirst,typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TSecond,TFirst>*& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__secondToFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondToFirst;
}
template<typename TFirst,typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TSecond,TFirst>* const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__secondToFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondToFirst;
}
template<typename TFirst,typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_set__secondToFirst(::System::Collections::Generic::IDictionary_2<TSecond,TFirst>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____secondToFirst, value);
}
template<typename TFirst,typename TSecond>
constexpr ::StringW& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__duplicateFirstErrorMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicateFirstErrorMessage;
}
template<typename TFirst,typename TSecond>
constexpr ::StringW const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__duplicateFirstErrorMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicateFirstErrorMessage;
}
template<typename TFirst,typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_set__duplicateFirstErrorMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____duplicateFirstErrorMessage, value);
}
template<typename TFirst,typename TSecond>
constexpr ::StringW& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__duplicateSecondErrorMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicateSecondErrorMessage;
}
template<typename TFirst,typename TSecond>
constexpr ::StringW const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_get__duplicateSecondErrorMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duplicateSecondErrorMessage;
}
template<typename TFirst,typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::__cordl_internal_set__duplicateSecondErrorMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____duplicateSecondErrorMessage, value);
}
template<typename TFirst,typename TSecond>
inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>*  firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>*  secondEqualityComparer, ::StringW  duplicateFirstErrorMessage, ::StringW  duplicateSecondErrorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TFirst>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSecond>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage, duplicateSecondErrorMessage);
}
template<typename TFirst,typename TSecond>
inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::Set(TFirst  first, TSecond  second)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, second);
}
template<typename TFirst,typename TSecond>
inline bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::TryGetByFirst(TFirst  first, ::ByRef<TSecond>  second)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>*>::get(),
                        "TryGetByFirst",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TSecond>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, first, second);
}
template<typename TFirst,typename TSecond>
inline bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::TryGetBySecond(TSecond  second, ::ByRef<TFirst>  first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>*>::get(),
                        "TryGetBySecond",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TFirst>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, second, first);
}
template<typename TFirst,typename TSecond>
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>* Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>*  firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>*  secondEqualityComparer, ::StringW  duplicateFirstErrorMessage, ::StringW  duplicateSecondErrorMessage)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>*>(firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage, duplicateSecondErrorMessage));
}
// Ctor Parameters []
template<typename TFirst,typename TSecond>
constexpr ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst,TSecond>::BidirectionalDictionary_2()   {
}
