#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/CollectionUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__CollectionUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__CollectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline void Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>::setStaticF_Empty(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<T,::Array<T>*>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>*>::get>(std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::ArrayW<T,::Array<T>*>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>*>::get>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>::CollectionUtils_EmptyArrayContainer_1()   {
}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.IsDictionaryType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::CollectionUtils::IsDictionaryType)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x27e2174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "IsDictionaryType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.ResolveEnumerableCollectionConstructor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::System::Type*)>(&::Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27e237c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "ResolveEnumerableCollectionConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.ResolveEnumerableCollectionConstructor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::System::Type*, ::System::Type*)>(&::Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x27e248c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "ResolveEnumerableCollectionConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.GetDimensions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<int32_t>* (*)(::System::Collections::IList*, int32_t)>(&::Newtonsoft::Json::Utilities::CollectionUtils::GetDimensions)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x27e27b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "GetDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.CopyFromJaggedToMultidimensionalArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IList*, ::System::Array*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::Newtonsoft::Json::Utilities::CollectionUtils::CopyFromJaggedToMultidimensionalArray)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x27e2a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "CopyFromJaggedToMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.JaggedArrayGetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Collections::IList*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::Newtonsoft::Json::Utilities::CollectionUtils::JaggedArrayGetValue)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x27e2d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "JaggedArrayGetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.ToMultidimensionalArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (*)(::System::Collections::IList*, ::System::Type*, int32_t)>(&::Newtonsoft::Json::Utilities::CollectionUtils::ToMultidimensionalArray)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x27e2e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "ToMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline bool Newtonsoft::Json::Utilities::CollectionUtils::IsNullOrEmpty(::System::Collections::Generic::ICollection_1<T>*  collection)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                    "IsNullOrEmpty",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, collection);
}
template<typename T>
inline void Newtonsoft::Json::Utilities::CollectionUtils::AddRange(::System::Collections::Generic::IList_1<T>*  initial, ::System::Collections::Generic::IEnumerable_1<T>*  collection)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                    "AddRange",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, initial, collection);
}
inline bool Newtonsoft::Json::Utilities::CollectionUtils::IsDictionaryType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "IsDictionaryType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::ConstructorInfo* Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor(::System::Type*  collectionType, ::System::Type*  collectionItemType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "ResolveEnumerableCollectionConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(nullptr, ___internal_method, collectionType, collectionItemType);
}
inline ::System::Reflection::ConstructorInfo* Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor(::System::Type*  collectionType, ::System::Type*  collectionItemType, ::System::Type*  constructorArgumentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "ResolveEnumerableCollectionConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(nullptr, ___internal_method, collectionType, collectionItemType, constructorArgumentType);
}
template<typename T>
inline int32_t Newtonsoft::Json::Utilities::CollectionUtils::IndexOf(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Func_2<T,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                    "IndexOf",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T,bool>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, collection, predicate);
}
template<typename T>
inline bool Newtonsoft::Json::Utilities::CollectionUtils::Contains(::System::Collections::Generic::List_1<T>*  list, T  value, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                    "Contains",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list, value, comparer);
}
template<typename T>
inline int32_t Newtonsoft::Json::Utilities::CollectionUtils::IndexOfReference(::System::Collections::Generic::List_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                    "IndexOfReference",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, list, item);
}
template<typename T>
inline void Newtonsoft::Json::Utilities::CollectionUtils::FastReverse(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                    "FastReverse",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list);
}
inline ::System::Collections::Generic::IList_1<int32_t>* Newtonsoft::Json::Utilities::CollectionUtils::GetDimensions(::System::Collections::IList*  values, int32_t  dimensionsCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "GetDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<int32_t>*, false>(nullptr, ___internal_method, values, dimensionsCount);
}
inline void Newtonsoft::Json::Utilities::CollectionUtils::CopyFromJaggedToMultidimensionalArray(::System::Collections::IList*  values, ::System::Array*  multidimensionalArray, ::ArrayW<int32_t,::Array<int32_t>*>  indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "CopyFromJaggedToMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, values, multidimensionalArray, indices);
}
inline ::System::Object* Newtonsoft::Json::Utilities::CollectionUtils::JaggedArrayGetValue(::System::Collections::IList*  values, ::ArrayW<int32_t,::Array<int32_t>*>  indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "JaggedArrayGetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, values, indices);
}
inline ::System::Array* Newtonsoft::Json::Utilities::CollectionUtils::ToMultidimensionalArray(::System::Collections::IList*  values, ::System::Type*  type, int32_t  rank)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                        "ToMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(nullptr, ___internal_method, values, type, rank);
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> Newtonsoft::Json::Utilities::CollectionUtils::ArrayEmpty()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::CollectionUtils*>::get(),
                    "ArrayEmpty",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils()   {
}
